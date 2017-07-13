/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: messages.proto */

#ifndef PROTOBUF_C_messages_2eproto__INCLUDED
#define PROTOBUF_C_messages_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _BaudRate BaudRate;
typedef struct _Frame Frame;
typedef struct _ToDevice ToDevice;
typedef struct _Response Response;
typedef struct _Status Status;
typedef struct _FromDevice FromDevice;


/* --- enums --- */

typedef enum _BaudRate__Rate {
  BAUD_RATE__RATE__K1000 = 0,
  BAUD_RATE__RATE__K800 = 1,
  BAUD_RATE__RATE__K500 = 2,
  BAUD_RATE__RATE__K250 = 3,
  BAUD_RATE__RATE__K125 = 4,
  BAUD_RATE__RATE__K100 = 5,
  BAUD_RATE__RATE__K83 = 6,
  BAUD_RATE__RATE__K50 = 7,
  BAUD_RATE__RATE__K20 = 8,
  BAUD_RATE__RATE__AUTO = 9
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(BAUD_RATE__RATE)
} BaudRate__Rate;
typedef enum _Frame__IDE {
  FRAME__IDE__STD = 0,
  FRAME__IDE__EXT = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FRAME__IDE)
} Frame__IDE;
typedef enum _Frame__RTR {
  FRAME__RTR__DATA = 0,
  FRAME__RTR__REMOTE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FRAME__RTR)
} Frame__RTR;
typedef enum _ToDevice__MessageType {
  TO_DEVICE__MESSAGE_TYPE__SEND_FRAME = 0,
  TO_DEVICE__MESSAGE_TYPE__INIT = 1,
  TO_DEVICE__MESSAGE_TYPE__DEINIT = 2,
  TO_DEVICE__MESSAGE_TYPE__SET_FILTER = 3,
  TO_DEVICE__MESSAGE_TYPE__SET_BAUDRATE = 4,
  TO_DEVICE__MESSAGE_TYPE__GET_STATUS = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(TO_DEVICE__MESSAGE_TYPE)
} ToDevice__MessageType;
typedef enum _FromDevice__MessageType {
  FROM_DEVICE__MESSAGE_TYPE__GET_FRAME = 0,
  FROM_DEVICE__MESSAGE_TYPE__STATUS = 1,
  FROM_DEVICE__MESSAGE_TYPE__RESPONSE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FROM_DEVICE__MESSAGE_TYPE)
} FromDevice__MessageType;

/* --- messages --- */

struct  _BaudRate
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rate;
  BaudRate__Rate rate;
};
#define BAUD_RATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&baud_rate__descriptor) \
    , 0,0 }


struct  _Frame
{
  ProtobufCMessage base;
  protobuf_c_boolean has_id;
  int32_t id;
  protobuf_c_boolean has_dlc;
  int32_t dlc;
  protobuf_c_boolean has_ide;
  Frame__IDE ide;
  protobuf_c_boolean has_rtr;
  Frame__RTR rtr;
  size_t n_data;
  ProtobufCBinaryData *data;
};
#define FRAME__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&frame__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,NULL }


struct  _ToDevice
{
  ProtobufCMessage base;
  protobuf_c_boolean has_type;
  ToDevice__MessageType type;
  protobuf_c_boolean has_id;
  int32_t id;
  Frame *frame;
  BaudRate *baudrate;
};
#define TO_DEVICE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&to_device__descriptor) \
    , 0,0, 0,0, NULL, NULL }


struct  _Response
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ok;
  protobuf_c_boolean ok;
  char *error;
};
#define RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&response__descriptor) \
    , 0,0, NULL }


struct  _Status
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rate;
  BaudRate__Rate rate;
};
#define STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&status__descriptor) \
    , 0,0 }


struct  _FromDevice
{
  ProtobufCMessage base;
  protobuf_c_boolean has_type;
  FromDevice__MessageType type;
  protobuf_c_boolean has_id;
  int32_t id;
  Frame *frame;
  Response *response;
  Status *status;
};
#define FROM_DEVICE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&from_device__descriptor) \
    , 0,0, 0,0, NULL, NULL, NULL }


/* BaudRate methods */
void   baud_rate__init
                     (BaudRate         *message);
size_t baud_rate__get_packed_size
                     (const BaudRate   *message);
size_t baud_rate__pack
                     (const BaudRate   *message,
                      uint8_t             *out);
size_t baud_rate__pack_to_buffer
                     (const BaudRate   *message,
                      ProtobufCBuffer     *buffer);
BaudRate *
       baud_rate__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   baud_rate__free_unpacked
                     (BaudRate *message,
                      ProtobufCAllocator *allocator);
/* Frame methods */
void   frame__init
                     (Frame         *message);
size_t frame__get_packed_size
                     (const Frame   *message);
size_t frame__pack
                     (const Frame   *message,
                      uint8_t             *out);
size_t frame__pack_to_buffer
                     (const Frame   *message,
                      ProtobufCBuffer     *buffer);
Frame *
       frame__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   frame__free_unpacked
                     (Frame *message,
                      ProtobufCAllocator *allocator);
/* ToDevice methods */
void   to_device__init
                     (ToDevice         *message);
size_t to_device__get_packed_size
                     (const ToDevice   *message);
size_t to_device__pack
                     (const ToDevice   *message,
                      uint8_t             *out);
size_t to_device__pack_to_buffer
                     (const ToDevice   *message,
                      ProtobufCBuffer     *buffer);
ToDevice *
       to_device__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   to_device__free_unpacked
                     (ToDevice *message,
                      ProtobufCAllocator *allocator);
/* Response methods */
void   response__init
                     (Response         *message);
size_t response__get_packed_size
                     (const Response   *message);
size_t response__pack
                     (const Response   *message,
                      uint8_t             *out);
size_t response__pack_to_buffer
                     (const Response   *message,
                      ProtobufCBuffer     *buffer);
Response *
       response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   response__free_unpacked
                     (Response *message,
                      ProtobufCAllocator *allocator);
/* Status methods */
void   status__init
                     (Status         *message);
size_t status__get_packed_size
                     (const Status   *message);
size_t status__pack
                     (const Status   *message,
                      uint8_t             *out);
size_t status__pack_to_buffer
                     (const Status   *message,
                      ProtobufCBuffer     *buffer);
Status *
       status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   status__free_unpacked
                     (Status *message,
                      ProtobufCAllocator *allocator);
/* FromDevice methods */
void   from_device__init
                     (FromDevice         *message);
size_t from_device__get_packed_size
                     (const FromDevice   *message);
size_t from_device__pack
                     (const FromDevice   *message,
                      uint8_t             *out);
size_t from_device__pack_to_buffer
                     (const FromDevice   *message,
                      ProtobufCBuffer     *buffer);
FromDevice *
       from_device__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   from_device__free_unpacked
                     (FromDevice *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*BaudRate_Closure)
                 (const BaudRate *message,
                  void *closure_data);
typedef void (*Frame_Closure)
                 (const Frame *message,
                  void *closure_data);
typedef void (*ToDevice_Closure)
                 (const ToDevice *message,
                  void *closure_data);
typedef void (*Response_Closure)
                 (const Response *message,
                  void *closure_data);
typedef void (*Status_Closure)
                 (const Status *message,
                  void *closure_data);
typedef void (*FromDevice_Closure)
                 (const FromDevice *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor baud_rate__descriptor;
extern const ProtobufCEnumDescriptor    baud_rate__rate__descriptor;
extern const ProtobufCMessageDescriptor frame__descriptor;
extern const ProtobufCEnumDescriptor    frame__ide__descriptor;
extern const ProtobufCEnumDescriptor    frame__rtr__descriptor;
extern const ProtobufCMessageDescriptor to_device__descriptor;
extern const ProtobufCEnumDescriptor    to_device__message_type__descriptor;
extern const ProtobufCMessageDescriptor response__descriptor;
extern const ProtobufCMessageDescriptor status__descriptor;
extern const ProtobufCMessageDescriptor from_device__descriptor;
extern const ProtobufCEnumDescriptor    from_device__message_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_messages_2eproto__INCLUDED */