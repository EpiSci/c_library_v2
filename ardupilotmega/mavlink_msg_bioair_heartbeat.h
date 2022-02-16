#pragma once
// MESSAGE BIOAIR_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_BIOAIR_HEARTBEAT 20020


typedef struct __mavlink_bioair_heartbeat_t {
 uint32_t node1[5]; /*<  Node Connections Info*/
 uint8_t numOfNode; /*<  The Number of bioair nodes*/
} mavlink_bioair_heartbeat_t;

#define MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN 21
#define MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN 21
#define MAVLINK_MSG_ID_20020_LEN 21
#define MAVLINK_MSG_ID_20020_MIN_LEN 21

#define MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC 210
#define MAVLINK_MSG_ID_20020_CRC 210

#define MAVLINK_MSG_BIOAIR_HEARTBEAT_FIELD_NODE1_LEN 5

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BIOAIR_HEARTBEAT { \
    20020, \
    "BIOAIR_HEARTBEAT", \
    2, \
    {  { "numOfNode", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_bioair_heartbeat_t, numOfNode) }, \
         { "node1", NULL, MAVLINK_TYPE_UINT32_T, 5, 0, offsetof(mavlink_bioair_heartbeat_t, node1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BIOAIR_HEARTBEAT { \
    "BIOAIR_HEARTBEAT", \
    2, \
    {  { "numOfNode", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_bioair_heartbeat_t, numOfNode) }, \
         { "node1", NULL, MAVLINK_TYPE_UINT32_T, 5, 0, offsetof(mavlink_bioair_heartbeat_t, node1) }, \
         } \
}
#endif

/**
 * @brief Pack a bioair_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param numOfNode  The Number of bioair nodes
 * @param node1  Node Connections Info
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bioair_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t numOfNode, const uint32_t *node1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 20, numOfNode);
    _mav_put_uint32_t_array(buf, 0, node1, 5);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN);
#else
    mavlink_bioair_heartbeat_t packet;
    packet.numOfNode = numOfNode;
    mav_array_memcpy(packet.node1, node1, sizeof(uint32_t)*5);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BIOAIR_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
}

/**
 * @brief Pack a bioair_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param numOfNode  The Number of bioair nodes
 * @param node1  Node Connections Info
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bioair_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t numOfNode,const uint32_t *node1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 20, numOfNode);
    _mav_put_uint32_t_array(buf, 0, node1, 5);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN);
#else
    mavlink_bioair_heartbeat_t packet;
    packet.numOfNode = numOfNode;
    mav_array_memcpy(packet.node1, node1, sizeof(uint32_t)*5);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BIOAIR_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
}

/**
 * @brief Encode a bioair_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bioair_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bioair_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bioair_heartbeat_t* bioair_heartbeat)
{
    return mavlink_msg_bioair_heartbeat_pack(system_id, component_id, msg, bioair_heartbeat->numOfNode, bioair_heartbeat->node1);
}

/**
 * @brief Encode a bioair_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bioair_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bioair_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bioair_heartbeat_t* bioair_heartbeat)
{
    return mavlink_msg_bioair_heartbeat_pack_chan(system_id, component_id, chan, msg, bioair_heartbeat->numOfNode, bioair_heartbeat->node1);
}

/**
 * @brief Send a bioair_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param numOfNode  The Number of bioair nodes
 * @param node1  Node Connections Info
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bioair_heartbeat_send(mavlink_channel_t chan, uint8_t numOfNode, const uint32_t *node1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 20, numOfNode);
    _mav_put_uint32_t_array(buf, 0, node1, 5);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT, buf, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
#else
    mavlink_bioair_heartbeat_t packet;
    packet.numOfNode = numOfNode;
    mav_array_memcpy(packet.node1, node1, sizeof(uint32_t)*5);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a bioair_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bioair_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_bioair_heartbeat_t* bioair_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bioair_heartbeat_send(chan, bioair_heartbeat->numOfNode, bioair_heartbeat->node1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT, (const char *)bioair_heartbeat, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bioair_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t numOfNode, const uint32_t *node1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 20, numOfNode);
    _mav_put_uint32_t_array(buf, 0, node1, 5);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT, buf, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
#else
    mavlink_bioair_heartbeat_t *packet = (mavlink_bioair_heartbeat_t *)msgbuf;
    packet->numOfNode = numOfNode;
    mav_array_memcpy(packet->node1, node1, sizeof(uint32_t)*5);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE BIOAIR_HEARTBEAT UNPACKING


/**
 * @brief Get field numOfNode from bioair_heartbeat message
 *
 * @return  The Number of bioair nodes
 */
static inline uint8_t mavlink_msg_bioair_heartbeat_get_numOfNode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field node1 from bioair_heartbeat message
 *
 * @return  Node Connections Info
 */
static inline uint16_t mavlink_msg_bioair_heartbeat_get_node1(const mavlink_message_t* msg, uint32_t *node1)
{
    return _MAV_RETURN_uint32_t_array(msg, node1, 5,  0);
}

/**
 * @brief Decode a bioair_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param bioair_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_bioair_heartbeat_decode(const mavlink_message_t* msg, mavlink_bioair_heartbeat_t* bioair_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bioair_heartbeat_get_node1(msg, bioair_heartbeat->node1);
    bioair_heartbeat->numOfNode = mavlink_msg_bioair_heartbeat_get_numOfNode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN;
        memset(bioair_heartbeat, 0, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN);
    memcpy(bioair_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
