#pragma once
// MESSAGE BIOAIR_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_BIOAIR_HEARTBEAT 20020


typedef struct __mavlink_bioair_heartbeat_t {
 uint8_t numOfNode; /*<  The Number of bioair nodes*/
 uint8_t node1; /*<  Node1 Connection Info*/
 uint8_t node2; /*<  Node1 Connection Info*/
 uint8_t node3; /*<  Node1 Connection Info*/
 uint8_t node4; /*<  Node1 Connection Info*/
 uint8_t node5; /*<  Node1 Connection Info*/
} mavlink_bioair_heartbeat_t;

#define MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN 6
#define MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN 6
#define MAVLINK_MSG_ID_20020_LEN 6
#define MAVLINK_MSG_ID_20020_MIN_LEN 6

#define MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC 149
#define MAVLINK_MSG_ID_20020_CRC 149



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BIOAIR_HEARTBEAT { \
    20020, \
    "BIOAIR_HEARTBEAT", \
    6, \
    {  { "numOfNode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_bioair_heartbeat_t, numOfNode) }, \
         { "node1", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_bioair_heartbeat_t, node1) }, \
         { "node2", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_bioair_heartbeat_t, node2) }, \
         { "node3", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_bioair_heartbeat_t, node3) }, \
         { "node4", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_bioair_heartbeat_t, node4) }, \
         { "node5", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_bioair_heartbeat_t, node5) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BIOAIR_HEARTBEAT { \
    "BIOAIR_HEARTBEAT", \
    6, \
    {  { "numOfNode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_bioair_heartbeat_t, numOfNode) }, \
         { "node1", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_bioair_heartbeat_t, node1) }, \
         { "node2", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_bioair_heartbeat_t, node2) }, \
         { "node3", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_bioair_heartbeat_t, node3) }, \
         { "node4", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_bioair_heartbeat_t, node4) }, \
         { "node5", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_bioair_heartbeat_t, node5) }, \
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
 * @param node1  Node1 Connection Info
 * @param node2  Node1 Connection Info
 * @param node3  Node1 Connection Info
 * @param node4  Node1 Connection Info
 * @param node5  Node1 Connection Info
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bioair_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t numOfNode, uint8_t node1, uint8_t node2, uint8_t node3, uint8_t node4, uint8_t node5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, numOfNode);
    _mav_put_uint8_t(buf, 1, node1);
    _mav_put_uint8_t(buf, 2, node2);
    _mav_put_uint8_t(buf, 3, node3);
    _mav_put_uint8_t(buf, 4, node4);
    _mav_put_uint8_t(buf, 5, node5);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN);
#else
    mavlink_bioair_heartbeat_t packet;
    packet.numOfNode = numOfNode;
    packet.node1 = node1;
    packet.node2 = node2;
    packet.node3 = node3;
    packet.node4 = node4;
    packet.node5 = node5;

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
 * @param node1  Node1 Connection Info
 * @param node2  Node1 Connection Info
 * @param node3  Node1 Connection Info
 * @param node4  Node1 Connection Info
 * @param node5  Node1 Connection Info
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bioair_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t numOfNode,uint8_t node1,uint8_t node2,uint8_t node3,uint8_t node4,uint8_t node5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, numOfNode);
    _mav_put_uint8_t(buf, 1, node1);
    _mav_put_uint8_t(buf, 2, node2);
    _mav_put_uint8_t(buf, 3, node3);
    _mav_put_uint8_t(buf, 4, node4);
    _mav_put_uint8_t(buf, 5, node5);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN);
#else
    mavlink_bioair_heartbeat_t packet;
    packet.numOfNode = numOfNode;
    packet.node1 = node1;
    packet.node2 = node2;
    packet.node3 = node3;
    packet.node4 = node4;
    packet.node5 = node5;

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
    return mavlink_msg_bioair_heartbeat_pack(system_id, component_id, msg, bioair_heartbeat->numOfNode, bioair_heartbeat->node1, bioair_heartbeat->node2, bioair_heartbeat->node3, bioair_heartbeat->node4, bioair_heartbeat->node5);
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
    return mavlink_msg_bioair_heartbeat_pack_chan(system_id, component_id, chan, msg, bioair_heartbeat->numOfNode, bioair_heartbeat->node1, bioair_heartbeat->node2, bioair_heartbeat->node3, bioair_heartbeat->node4, bioair_heartbeat->node5);
}

/**
 * @brief Send a bioair_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param numOfNode  The Number of bioair nodes
 * @param node1  Node1 Connection Info
 * @param node2  Node1 Connection Info
 * @param node3  Node1 Connection Info
 * @param node4  Node1 Connection Info
 * @param node5  Node1 Connection Info
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bioair_heartbeat_send(mavlink_channel_t chan, uint8_t numOfNode, uint8_t node1, uint8_t node2, uint8_t node3, uint8_t node4, uint8_t node5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, numOfNode);
    _mav_put_uint8_t(buf, 1, node1);
    _mav_put_uint8_t(buf, 2, node2);
    _mav_put_uint8_t(buf, 3, node3);
    _mav_put_uint8_t(buf, 4, node4);
    _mav_put_uint8_t(buf, 5, node5);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT, buf, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
#else
    mavlink_bioair_heartbeat_t packet;
    packet.numOfNode = numOfNode;
    packet.node1 = node1;
    packet.node2 = node2;
    packet.node3 = node3;
    packet.node4 = node4;
    packet.node5 = node5;

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
    mavlink_msg_bioair_heartbeat_send(chan, bioair_heartbeat->numOfNode, bioair_heartbeat->node1, bioair_heartbeat->node2, bioair_heartbeat->node3, bioair_heartbeat->node4, bioair_heartbeat->node5);
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
static inline void mavlink_msg_bioair_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t numOfNode, uint8_t node1, uint8_t node2, uint8_t node3, uint8_t node4, uint8_t node5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, numOfNode);
    _mav_put_uint8_t(buf, 1, node1);
    _mav_put_uint8_t(buf, 2, node2);
    _mav_put_uint8_t(buf, 3, node3);
    _mav_put_uint8_t(buf, 4, node4);
    _mav_put_uint8_t(buf, 5, node5);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT, buf, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_CRC);
#else
    mavlink_bioair_heartbeat_t *packet = (mavlink_bioair_heartbeat_t *)msgbuf;
    packet->numOfNode = numOfNode;
    packet->node1 = node1;
    packet->node2 = node2;
    packet->node3 = node3;
    packet->node4 = node4;
    packet->node5 = node5;

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
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field node1 from bioair_heartbeat message
 *
 * @return  Node1 Connection Info
 */
static inline uint8_t mavlink_msg_bioair_heartbeat_get_node1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field node2 from bioair_heartbeat message
 *
 * @return  Node1 Connection Info
 */
static inline uint8_t mavlink_msg_bioair_heartbeat_get_node2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field node3 from bioair_heartbeat message
 *
 * @return  Node1 Connection Info
 */
static inline uint8_t mavlink_msg_bioair_heartbeat_get_node3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field node4 from bioair_heartbeat message
 *
 * @return  Node1 Connection Info
 */
static inline uint8_t mavlink_msg_bioair_heartbeat_get_node4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field node5 from bioair_heartbeat message
 *
 * @return  Node1 Connection Info
 */
static inline uint8_t mavlink_msg_bioair_heartbeat_get_node5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
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
    bioair_heartbeat->numOfNode = mavlink_msg_bioair_heartbeat_get_numOfNode(msg);
    bioair_heartbeat->node1 = mavlink_msg_bioair_heartbeat_get_node1(msg);
    bioair_heartbeat->node2 = mavlink_msg_bioair_heartbeat_get_node2(msg);
    bioair_heartbeat->node3 = mavlink_msg_bioair_heartbeat_get_node3(msg);
    bioair_heartbeat->node4 = mavlink_msg_bioair_heartbeat_get_node4(msg);
    bioair_heartbeat->node5 = mavlink_msg_bioair_heartbeat_get_node5(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN;
        memset(bioair_heartbeat, 0, MAVLINK_MSG_ID_BIOAIR_HEARTBEAT_LEN);
    memcpy(bioair_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
