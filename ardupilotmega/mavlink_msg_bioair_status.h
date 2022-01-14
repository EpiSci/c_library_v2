#pragma once
// MESSAGE BIOAIR_STATUS PACKING

#define MAVLINK_MSG_ID_BIOAIR_STATUS 20005


typedef struct __mavlink_bioair_status_t {
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t node_id; /*<  Node ID*/
 uint8_t node_state; /*<  Node State*/
} mavlink_bioair_status_t;

#define MAVLINK_MSG_ID_BIOAIR_STATUS_LEN 4
#define MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN 4
#define MAVLINK_MSG_ID_20005_LEN 4
#define MAVLINK_MSG_ID_20005_MIN_LEN 4

#define MAVLINK_MSG_ID_BIOAIR_STATUS_CRC 24
#define MAVLINK_MSG_ID_20005_CRC 24



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BIOAIR_STATUS { \
    20005, \
    "BIOAIR_STATUS", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_bioair_status_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_bioair_status_t, target_component) }, \
         { "node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_bioair_status_t, node_id) }, \
         { "node_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_bioair_status_t, node_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BIOAIR_STATUS { \
    "BIOAIR_STATUS", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_bioair_status_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_bioair_status_t, target_component) }, \
         { "node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_bioair_status_t, node_id) }, \
         { "node_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_bioair_status_t, node_state) }, \
         } \
}
#endif

/**
 * @brief Pack a bioair_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param node_id  Node ID
 * @param node_state  Node State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bioair_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t node_id, uint8_t node_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, node_id);
    _mav_put_uint8_t(buf, 3, node_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN);
#else
    mavlink_bioair_status_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.node_id = node_id;
    packet.node_state = node_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BIOAIR_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_CRC);
}

/**
 * @brief Pack a bioair_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param node_id  Node ID
 * @param node_state  Node State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bioair_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t node_id,uint8_t node_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, node_id);
    _mav_put_uint8_t(buf, 3, node_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN);
#else
    mavlink_bioair_status_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.node_id = node_id;
    packet.node_state = node_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BIOAIR_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_CRC);
}

/**
 * @brief Encode a bioair_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bioair_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bioair_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bioair_status_t* bioair_status)
{
    return mavlink_msg_bioair_status_pack(system_id, component_id, msg, bioair_status->target_system, bioair_status->target_component, bioair_status->node_id, bioair_status->node_state);
}

/**
 * @brief Encode a bioair_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bioair_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bioair_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bioair_status_t* bioair_status)
{
    return mavlink_msg_bioair_status_pack_chan(system_id, component_id, chan, msg, bioair_status->target_system, bioair_status->target_component, bioair_status->node_id, bioair_status->node_state);
}

/**
 * @brief Send a bioair_status message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param node_id  Node ID
 * @param node_state  Node State
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bioair_status_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t node_id, uint8_t node_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, node_id);
    _mav_put_uint8_t(buf, 3, node_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_STATUS, buf, MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_CRC);
#else
    mavlink_bioair_status_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.node_id = node_id;
    packet.node_state = node_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_CRC);
#endif
}

/**
 * @brief Send a bioair_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bioair_status_send_struct(mavlink_channel_t chan, const mavlink_bioair_status_t* bioair_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bioair_status_send(chan, bioair_status->target_system, bioair_status->target_component, bioair_status->node_id, bioair_status->node_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_STATUS, (const char *)bioair_status, MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_BIOAIR_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bioair_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t node_id, uint8_t node_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, node_id);
    _mav_put_uint8_t(buf, 3, node_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_STATUS, buf, MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_CRC);
#else
    mavlink_bioair_status_t *packet = (mavlink_bioair_status_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->node_id = node_id;
    packet->node_state = node_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_STATUS, (const char *)packet, MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN, MAVLINK_MSG_ID_BIOAIR_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE BIOAIR_STATUS UNPACKING


/**
 * @brief Get field target_system from bioair_status message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_bioair_status_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from bioair_status message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_bioair_status_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field node_id from bioair_status message
 *
 * @return  Node ID
 */
static inline uint8_t mavlink_msg_bioair_status_get_node_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field node_state from bioair_status message
 *
 * @return  Node State
 */
static inline uint8_t mavlink_msg_bioair_status_get_node_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Decode a bioair_status message into a struct
 *
 * @param msg The message to decode
 * @param bioair_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_bioair_status_decode(const mavlink_message_t* msg, mavlink_bioair_status_t* bioair_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    bioair_status->target_system = mavlink_msg_bioair_status_get_target_system(msg);
    bioair_status->target_component = mavlink_msg_bioair_status_get_target_component(msg);
    bioair_status->node_id = mavlink_msg_bioair_status_get_node_id(msg);
    bioair_status->node_state = mavlink_msg_bioair_status_get_node_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BIOAIR_STATUS_LEN? msg->len : MAVLINK_MSG_ID_BIOAIR_STATUS_LEN;
        memset(bioair_status, 0, MAVLINK_MSG_ID_BIOAIR_STATUS_LEN);
    memcpy(bioair_status, _MAV_PAYLOAD(msg), len);
#endif
}
