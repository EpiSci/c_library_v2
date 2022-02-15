#pragma once
// MESSAGE NODE_STATUS PACKING

#define MAVLINK_MSG_ID_NODE_STATUS 20015


typedef struct __mavlink_node_status_t {
 uint8_t node_id; /*<  Node ID*/
 uint8_t node_state; /*<  Node State*/
} mavlink_node_status_t;

#define MAVLINK_MSG_ID_NODE_STATUS_LEN 2
#define MAVLINK_MSG_ID_NODE_STATUS_MIN_LEN 2
#define MAVLINK_MSG_ID_20015_LEN 2
#define MAVLINK_MSG_ID_20015_MIN_LEN 2

#define MAVLINK_MSG_ID_NODE_STATUS_CRC 184
#define MAVLINK_MSG_ID_20015_CRC 184



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_NODE_STATUS { \
    20015, \
    "NODE_STATUS", \
    2, \
    {  { "node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_node_status_t, node_id) }, \
         { "node_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_node_status_t, node_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_NODE_STATUS { \
    "NODE_STATUS", \
    2, \
    {  { "node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_node_status_t, node_id) }, \
         { "node_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_node_status_t, node_state) }, \
         } \
}
#endif

/**
 * @brief Pack a node_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param node_id  Node ID
 * @param node_state  Node State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_node_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t node_id, uint8_t node_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NODE_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, node_id);
    _mav_put_uint8_t(buf, 1, node_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NODE_STATUS_LEN);
#else
    mavlink_node_status_t packet;
    packet.node_id = node_id;
    packet.node_state = node_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NODE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NODE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_NODE_STATUS_LEN, MAVLINK_MSG_ID_NODE_STATUS_CRC);
}

/**
 * @brief Pack a node_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param node_id  Node ID
 * @param node_state  Node State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_node_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t node_id,uint8_t node_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NODE_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, node_id);
    _mav_put_uint8_t(buf, 1, node_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NODE_STATUS_LEN);
#else
    mavlink_node_status_t packet;
    packet.node_id = node_id;
    packet.node_state = node_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NODE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NODE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_NODE_STATUS_LEN, MAVLINK_MSG_ID_NODE_STATUS_CRC);
}

/**
 * @brief Encode a node_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param node_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_node_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_node_status_t* node_status)
{
    return mavlink_msg_node_status_pack(system_id, component_id, msg, node_status->node_id, node_status->node_state);
}

/**
 * @brief Encode a node_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param node_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_node_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_node_status_t* node_status)
{
    return mavlink_msg_node_status_pack_chan(system_id, component_id, chan, msg, node_status->node_id, node_status->node_state);
}

/**
 * @brief Send a node_status message
 * @param chan MAVLink channel to send the message
 *
 * @param node_id  Node ID
 * @param node_state  Node State
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_node_status_send(mavlink_channel_t chan, uint8_t node_id, uint8_t node_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NODE_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, node_id);
    _mav_put_uint8_t(buf, 1, node_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NODE_STATUS, buf, MAVLINK_MSG_ID_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_NODE_STATUS_LEN, MAVLINK_MSG_ID_NODE_STATUS_CRC);
#else
    mavlink_node_status_t packet;
    packet.node_id = node_id;
    packet.node_state = node_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NODE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_NODE_STATUS_LEN, MAVLINK_MSG_ID_NODE_STATUS_CRC);
#endif
}

/**
 * @brief Send a node_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_node_status_send_struct(mavlink_channel_t chan, const mavlink_node_status_t* node_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_node_status_send(chan, node_status->node_id, node_status->node_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NODE_STATUS, (const char *)node_status, MAVLINK_MSG_ID_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_NODE_STATUS_LEN, MAVLINK_MSG_ID_NODE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_NODE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_node_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t node_id, uint8_t node_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, node_id);
    _mav_put_uint8_t(buf, 1, node_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NODE_STATUS, buf, MAVLINK_MSG_ID_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_NODE_STATUS_LEN, MAVLINK_MSG_ID_NODE_STATUS_CRC);
#else
    mavlink_node_status_t *packet = (mavlink_node_status_t *)msgbuf;
    packet->node_id = node_id;
    packet->node_state = node_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NODE_STATUS, (const char *)packet, MAVLINK_MSG_ID_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_NODE_STATUS_LEN, MAVLINK_MSG_ID_NODE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE NODE_STATUS UNPACKING


/**
 * @brief Get field node_id from node_status message
 *
 * @return  Node ID
 */
static inline uint8_t mavlink_msg_node_status_get_node_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field node_state from node_status message
 *
 * @return  Node State
 */
static inline uint8_t mavlink_msg_node_status_get_node_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a node_status message into a struct
 *
 * @param msg The message to decode
 * @param node_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_node_status_decode(const mavlink_message_t* msg, mavlink_node_status_t* node_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    node_status->node_id = mavlink_msg_node_status_get_node_id(msg);
    node_status->node_state = mavlink_msg_node_status_get_node_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_NODE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_NODE_STATUS_LEN;
        memset(node_status, 0, MAVLINK_MSG_ID_NODE_STATUS_LEN);
    memcpy(node_status, _MAV_PAYLOAD(msg), len);
#endif
}
