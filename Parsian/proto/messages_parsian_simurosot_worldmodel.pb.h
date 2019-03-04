// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_parsian_simurosot_worldmodel.proto

#ifndef PROTOBUF_INCLUDED_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto
#define PROTOBUF_INCLUDED_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto 

namespace protobuf_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto
class MovingObject;
class MovingObjectDefaultTypeInternal;
extern MovingObjectDefaultTypeInternal _MovingObject_default_instance_;
class Vector2D;
class Vector2DDefaultTypeInternal;
extern Vector2DDefaultTypeInternal _Vector2D_default_instance_;
class WorldModel;
class WorldModelDefaultTypeInternal;
extern WorldModelDefaultTypeInternal _WorldModel_default_instance_;
namespace google {
namespace protobuf {
template<> ::MovingObject* Arena::CreateMaybeMessage<::MovingObject>(Arena*);
template<> ::Vector2D* Arena::CreateMaybeMessage<::Vector2D>(Arena*);
template<> ::WorldModel* Arena::CreateMaybeMessage<::WorldModel>(Arena*);
}  // namespace protobuf
}  // namespace google

enum GameState {
  PlayOn = 0,
  FreeBall_LeftTop = 1,
  FreeBall_LeftBot = 2,
  FreeBall_RightTop = 3,
  FreeBall_RightBot = 4,
  PlaceKick_Yellow = 5,
  PlaceKick_Blue = 6,
  PenaltyKick_Yellow = 7,
  PenaltyKick_Blue = 8,
  FreeKick_Yellow = 9,
  FreeKick_Blue = 10,
  GoalKick_Yellow = 11,
  GoalKick_Blue = 12,
  GameState_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GameState_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GameState_IsValid(int value);
const GameState GameState_MIN = PlayOn;
const GameState GameState_MAX = GoalKick_Blue;
const int GameState_ARRAYSIZE = GameState_MAX + 1;

const ::google::protobuf::EnumDescriptor* GameState_descriptor();
inline const ::std::string& GameState_Name(GameState value) {
  return ::google::protobuf::internal::NameOfEnum(
    GameState_descriptor(), value);
}
inline bool GameState_Parse(
    const ::std::string& name, GameState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GameState>(
    GameState_descriptor(), name, value);
}
// ===================================================================

class Vector2D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Vector2D) */ {
 public:
  Vector2D();
  virtual ~Vector2D();

  Vector2D(const Vector2D& from);

  inline Vector2D& operator=(const Vector2D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Vector2D(Vector2D&& from) noexcept
    : Vector2D() {
    *this = ::std::move(from);
  }

  inline Vector2D& operator=(Vector2D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector2D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector2D* internal_default_instance() {
    return reinterpret_cast<const Vector2D*>(
               &_Vector2D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Vector2D* other);
  friend void swap(Vector2D& a, Vector2D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Vector2D* New() const final {
    return CreateMaybeMessage<Vector2D>(NULL);
  }

  Vector2D* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Vector2D>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Vector2D& from);
  void MergeFrom(const Vector2D& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Vector2D* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // @@protoc_insertion_point(class_scope:Vector2D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MovingObject : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MovingObject) */ {
 public:
  MovingObject();
  virtual ~MovingObject();

  MovingObject(const MovingObject& from);

  inline MovingObject& operator=(const MovingObject& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MovingObject(MovingObject&& from) noexcept
    : MovingObject() {
    *this = ::std::move(from);
  }

  inline MovingObject& operator=(MovingObject&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MovingObject& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MovingObject* internal_default_instance() {
    return reinterpret_cast<const MovingObject*>(
               &_MovingObject_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(MovingObject* other);
  friend void swap(MovingObject& a, MovingObject& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MovingObject* New() const final {
    return CreateMaybeMessage<MovingObject>(NULL);
  }

  MovingObject* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MovingObject>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MovingObject& from);
  void MergeFrom(const MovingObject& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MovingObject* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Vector2D pos = 2;
  bool has_pos() const;
  void clear_pos();
  static const int kPosFieldNumber = 2;
  private:
  const ::Vector2D& _internal_pos() const;
  public:
  const ::Vector2D& pos() const;
  ::Vector2D* release_pos();
  ::Vector2D* mutable_pos();
  void set_allocated_pos(::Vector2D* pos);

  // .Vector2D vel = 3;
  bool has_vel() const;
  void clear_vel();
  static const int kVelFieldNumber = 3;
  private:
  const ::Vector2D& _internal_vel() const;
  public:
  const ::Vector2D& vel() const;
  ::Vector2D* release_vel();
  ::Vector2D* mutable_vel();
  void set_allocated_vel(::Vector2D* vel);

  // .Vector2D acc = 4;
  bool has_acc() const;
  void clear_acc();
  static const int kAccFieldNumber = 4;
  private:
  const ::Vector2D& _internal_acc() const;
  public:
  const ::Vector2D& acc() const;
  ::Vector2D* release_acc();
  ::Vector2D* mutable_acc();
  void set_allocated_acc(::Vector2D* acc);

  // uint32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // float anguleVelocity = 5;
  void clear_angulevelocity();
  static const int kAnguleVelocityFieldNumber = 5;
  float angulevelocity() const;
  void set_angulevelocity(float value);

  // float direction = 6;
  void clear_direction();
  static const int kDirectionFieldNumber = 6;
  float direction() const;
  void set_direction(float value);

  // @@protoc_insertion_point(class_scope:MovingObject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::Vector2D* pos_;
  ::Vector2D* vel_;
  ::Vector2D* acc_;
  ::google::protobuf::uint32 id_;
  float angulevelocity_;
  float direction_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class WorldModel : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:WorldModel) */ {
 public:
  WorldModel();
  virtual ~WorldModel();

  WorldModel(const WorldModel& from);

  inline WorldModel& operator=(const WorldModel& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WorldModel(WorldModel&& from) noexcept
    : WorldModel() {
    *this = ::std::move(from);
  }

  inline WorldModel& operator=(WorldModel&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const WorldModel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorldModel* internal_default_instance() {
    return reinterpret_cast<const WorldModel*>(
               &_WorldModel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(WorldModel* other);
  friend void swap(WorldModel& a, WorldModel& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WorldModel* New() const final {
    return CreateMaybeMessage<WorldModel>(NULL);
  }

  WorldModel* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<WorldModel>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const WorldModel& from);
  void MergeFrom(const WorldModel& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WorldModel* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .MovingObject our_robots = 2;
  int our_robots_size() const;
  void clear_our_robots();
  static const int kOurRobotsFieldNumber = 2;
  ::MovingObject* mutable_our_robots(int index);
  ::google::protobuf::RepeatedPtrField< ::MovingObject >*
      mutable_our_robots();
  const ::MovingObject& our_robots(int index) const;
  ::MovingObject* add_our_robots();
  const ::google::protobuf::RepeatedPtrField< ::MovingObject >&
      our_robots() const;

  // repeated .MovingObject opp_robots = 3;
  int opp_robots_size() const;
  void clear_opp_robots();
  static const int kOppRobotsFieldNumber = 3;
  ::MovingObject* mutable_opp_robots(int index);
  ::google::protobuf::RepeatedPtrField< ::MovingObject >*
      mutable_opp_robots();
  const ::MovingObject& opp_robots(int index) const;
  ::MovingObject* add_opp_robots();
  const ::google::protobuf::RepeatedPtrField< ::MovingObject >&
      opp_robots() const;

  // string mode = 5;
  void clear_mode();
  static const int kModeFieldNumber = 5;
  const ::std::string& mode() const;
  void set_mode(const ::std::string& value);
  #if LANG_CXX11
  void set_mode(::std::string&& value);
  #endif
  void set_mode(const char* value);
  void set_mode(const char* value, size_t size);
  ::std::string* mutable_mode();
  ::std::string* release_mode();
  void set_allocated_mode(::std::string* mode);

  // .MovingObject ball = 1;
  bool has_ball() const;
  void clear_ball();
  static const int kBallFieldNumber = 1;
  private:
  const ::MovingObject& _internal_ball() const;
  public:
  const ::MovingObject& ball() const;
  ::MovingObject* release_ball();
  ::MovingObject* mutable_ball();
  void set_allocated_ball(::MovingObject* ball);

  // bool blue = 4;
  void clear_blue();
  static const int kBlueFieldNumber = 4;
  bool blue() const;
  void set_blue(bool value);

  // .GameState gameState = 6;
  void clear_gamestate();
  static const int kGameStateFieldNumber = 6;
  ::GameState gamestate() const;
  void set_gamestate(::GameState value);

  // @@protoc_insertion_point(class_scope:WorldModel)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::MovingObject > our_robots_;
  ::google::protobuf::RepeatedPtrField< ::MovingObject > opp_robots_;
  ::google::protobuf::internal::ArenaStringPtr mode_;
  ::MovingObject* ball_;
  bool blue_;
  int gamestate_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector2D

// float x = 1;
inline void Vector2D::clear_x() {
  x_ = 0;
}
inline float Vector2D::x() const {
  // @@protoc_insertion_point(field_get:Vector2D.x)
  return x_;
}
inline void Vector2D::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:Vector2D.x)
}

// float y = 2;
inline void Vector2D::clear_y() {
  y_ = 0;
}
inline float Vector2D::y() const {
  // @@protoc_insertion_point(field_get:Vector2D.y)
  return y_;
}
inline void Vector2D::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:Vector2D.y)
}

// -------------------------------------------------------------------

// MovingObject

// uint32 id = 1;
inline void MovingObject::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 MovingObject::id() const {
  // @@protoc_insertion_point(field_get:MovingObject.id)
  return id_;
}
inline void MovingObject::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:MovingObject.id)
}

// .Vector2D pos = 2;
inline bool MovingObject::has_pos() const {
  return this != internal_default_instance() && pos_ != NULL;
}
inline void MovingObject::clear_pos() {
  if (GetArenaNoVirtual() == NULL && pos_ != NULL) {
    delete pos_;
  }
  pos_ = NULL;
}
inline const ::Vector2D& MovingObject::_internal_pos() const {
  return *pos_;
}
inline const ::Vector2D& MovingObject::pos() const {
  const ::Vector2D* p = pos_;
  // @@protoc_insertion_point(field_get:MovingObject.pos)
  return p != NULL ? *p : *reinterpret_cast<const ::Vector2D*>(
      &::_Vector2D_default_instance_);
}
inline ::Vector2D* MovingObject::release_pos() {
  // @@protoc_insertion_point(field_release:MovingObject.pos)
  
  ::Vector2D* temp = pos_;
  pos_ = NULL;
  return temp;
}
inline ::Vector2D* MovingObject::mutable_pos() {
  
  if (pos_ == NULL) {
    auto* p = CreateMaybeMessage<::Vector2D>(GetArenaNoVirtual());
    pos_ = p;
  }
  // @@protoc_insertion_point(field_mutable:MovingObject.pos)
  return pos_;
}
inline void MovingObject::set_allocated_pos(::Vector2D* pos) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete pos_;
  }
  if (pos) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      pos = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pos, submessage_arena);
    }
    
  } else {
    
  }
  pos_ = pos;
  // @@protoc_insertion_point(field_set_allocated:MovingObject.pos)
}

// .Vector2D vel = 3;
inline bool MovingObject::has_vel() const {
  return this != internal_default_instance() && vel_ != NULL;
}
inline void MovingObject::clear_vel() {
  if (GetArenaNoVirtual() == NULL && vel_ != NULL) {
    delete vel_;
  }
  vel_ = NULL;
}
inline const ::Vector2D& MovingObject::_internal_vel() const {
  return *vel_;
}
inline const ::Vector2D& MovingObject::vel() const {
  const ::Vector2D* p = vel_;
  // @@protoc_insertion_point(field_get:MovingObject.vel)
  return p != NULL ? *p : *reinterpret_cast<const ::Vector2D*>(
      &::_Vector2D_default_instance_);
}
inline ::Vector2D* MovingObject::release_vel() {
  // @@protoc_insertion_point(field_release:MovingObject.vel)
  
  ::Vector2D* temp = vel_;
  vel_ = NULL;
  return temp;
}
inline ::Vector2D* MovingObject::mutable_vel() {
  
  if (vel_ == NULL) {
    auto* p = CreateMaybeMessage<::Vector2D>(GetArenaNoVirtual());
    vel_ = p;
  }
  // @@protoc_insertion_point(field_mutable:MovingObject.vel)
  return vel_;
}
inline void MovingObject::set_allocated_vel(::Vector2D* vel) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete vel_;
  }
  if (vel) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      vel = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, vel, submessage_arena);
    }
    
  } else {
    
  }
  vel_ = vel;
  // @@protoc_insertion_point(field_set_allocated:MovingObject.vel)
}

// .Vector2D acc = 4;
inline bool MovingObject::has_acc() const {
  return this != internal_default_instance() && acc_ != NULL;
}
inline void MovingObject::clear_acc() {
  if (GetArenaNoVirtual() == NULL && acc_ != NULL) {
    delete acc_;
  }
  acc_ = NULL;
}
inline const ::Vector2D& MovingObject::_internal_acc() const {
  return *acc_;
}
inline const ::Vector2D& MovingObject::acc() const {
  const ::Vector2D* p = acc_;
  // @@protoc_insertion_point(field_get:MovingObject.acc)
  return p != NULL ? *p : *reinterpret_cast<const ::Vector2D*>(
      &::_Vector2D_default_instance_);
}
inline ::Vector2D* MovingObject::release_acc() {
  // @@protoc_insertion_point(field_release:MovingObject.acc)
  
  ::Vector2D* temp = acc_;
  acc_ = NULL;
  return temp;
}
inline ::Vector2D* MovingObject::mutable_acc() {
  
  if (acc_ == NULL) {
    auto* p = CreateMaybeMessage<::Vector2D>(GetArenaNoVirtual());
    acc_ = p;
  }
  // @@protoc_insertion_point(field_mutable:MovingObject.acc)
  return acc_;
}
inline void MovingObject::set_allocated_acc(::Vector2D* acc) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete acc_;
  }
  if (acc) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      acc = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, acc, submessage_arena);
    }
    
  } else {
    
  }
  acc_ = acc;
  // @@protoc_insertion_point(field_set_allocated:MovingObject.acc)
}

// float anguleVelocity = 5;
inline void MovingObject::clear_angulevelocity() {
  angulevelocity_ = 0;
}
inline float MovingObject::angulevelocity() const {
  // @@protoc_insertion_point(field_get:MovingObject.anguleVelocity)
  return angulevelocity_;
}
inline void MovingObject::set_angulevelocity(float value) {
  
  angulevelocity_ = value;
  // @@protoc_insertion_point(field_set:MovingObject.anguleVelocity)
}

// float direction = 6;
inline void MovingObject::clear_direction() {
  direction_ = 0;
}
inline float MovingObject::direction() const {
  // @@protoc_insertion_point(field_get:MovingObject.direction)
  return direction_;
}
inline void MovingObject::set_direction(float value) {
  
  direction_ = value;
  // @@protoc_insertion_point(field_set:MovingObject.direction)
}

// -------------------------------------------------------------------

// WorldModel

// .MovingObject ball = 1;
inline bool WorldModel::has_ball() const {
  return this != internal_default_instance() && ball_ != NULL;
}
inline void WorldModel::clear_ball() {
  if (GetArenaNoVirtual() == NULL && ball_ != NULL) {
    delete ball_;
  }
  ball_ = NULL;
}
inline const ::MovingObject& WorldModel::_internal_ball() const {
  return *ball_;
}
inline const ::MovingObject& WorldModel::ball() const {
  const ::MovingObject* p = ball_;
  // @@protoc_insertion_point(field_get:WorldModel.ball)
  return p != NULL ? *p : *reinterpret_cast<const ::MovingObject*>(
      &::_MovingObject_default_instance_);
}
inline ::MovingObject* WorldModel::release_ball() {
  // @@protoc_insertion_point(field_release:WorldModel.ball)
  
  ::MovingObject* temp = ball_;
  ball_ = NULL;
  return temp;
}
inline ::MovingObject* WorldModel::mutable_ball() {
  
  if (ball_ == NULL) {
    auto* p = CreateMaybeMessage<::MovingObject>(GetArenaNoVirtual());
    ball_ = p;
  }
  // @@protoc_insertion_point(field_mutable:WorldModel.ball)
  return ball_;
}
inline void WorldModel::set_allocated_ball(::MovingObject* ball) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete ball_;
  }
  if (ball) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      ball = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, ball, submessage_arena);
    }
    
  } else {
    
  }
  ball_ = ball;
  // @@protoc_insertion_point(field_set_allocated:WorldModel.ball)
}

// repeated .MovingObject our_robots = 2;
inline int WorldModel::our_robots_size() const {
  return our_robots_.size();
}
inline void WorldModel::clear_our_robots() {
  our_robots_.Clear();
}
inline ::MovingObject* WorldModel::mutable_our_robots(int index) {
  // @@protoc_insertion_point(field_mutable:WorldModel.our_robots)
  return our_robots_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::MovingObject >*
WorldModel::mutable_our_robots() {
  // @@protoc_insertion_point(field_mutable_list:WorldModel.our_robots)
  return &our_robots_;
}
inline const ::MovingObject& WorldModel::our_robots(int index) const {
  // @@protoc_insertion_point(field_get:WorldModel.our_robots)
  return our_robots_.Get(index);
}
inline ::MovingObject* WorldModel::add_our_robots() {
  // @@protoc_insertion_point(field_add:WorldModel.our_robots)
  return our_robots_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::MovingObject >&
WorldModel::our_robots() const {
  // @@protoc_insertion_point(field_list:WorldModel.our_robots)
  return our_robots_;
}

// repeated .MovingObject opp_robots = 3;
inline int WorldModel::opp_robots_size() const {
  return opp_robots_.size();
}
inline void WorldModel::clear_opp_robots() {
  opp_robots_.Clear();
}
inline ::MovingObject* WorldModel::mutable_opp_robots(int index) {
  // @@protoc_insertion_point(field_mutable:WorldModel.opp_robots)
  return opp_robots_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::MovingObject >*
WorldModel::mutable_opp_robots() {
  // @@protoc_insertion_point(field_mutable_list:WorldModel.opp_robots)
  return &opp_robots_;
}
inline const ::MovingObject& WorldModel::opp_robots(int index) const {
  // @@protoc_insertion_point(field_get:WorldModel.opp_robots)
  return opp_robots_.Get(index);
}
inline ::MovingObject* WorldModel::add_opp_robots() {
  // @@protoc_insertion_point(field_add:WorldModel.opp_robots)
  return opp_robots_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::MovingObject >&
WorldModel::opp_robots() const {
  // @@protoc_insertion_point(field_list:WorldModel.opp_robots)
  return opp_robots_;
}

// bool blue = 4;
inline void WorldModel::clear_blue() {
  blue_ = false;
}
inline bool WorldModel::blue() const {
  // @@protoc_insertion_point(field_get:WorldModel.blue)
  return blue_;
}
inline void WorldModel::set_blue(bool value) {
  
  blue_ = value;
  // @@protoc_insertion_point(field_set:WorldModel.blue)
}

// string mode = 5;
inline void WorldModel::clear_mode() {
  mode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& WorldModel::mode() const {
  // @@protoc_insertion_point(field_get:WorldModel.mode)
  return mode_.GetNoArena();
}
inline void WorldModel::set_mode(const ::std::string& value) {
  
  mode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:WorldModel.mode)
}
#if LANG_CXX11
inline void WorldModel::set_mode(::std::string&& value) {
  
  mode_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:WorldModel.mode)
}
#endif
inline void WorldModel::set_mode(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  mode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:WorldModel.mode)
}
inline void WorldModel::set_mode(const char* value, size_t size) {
  
  mode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:WorldModel.mode)
}
inline ::std::string* WorldModel::mutable_mode() {
  
  // @@protoc_insertion_point(field_mutable:WorldModel.mode)
  return mode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WorldModel::release_mode() {
  // @@protoc_insertion_point(field_release:WorldModel.mode)
  
  return mode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WorldModel::set_allocated_mode(::std::string* mode) {
  if (mode != NULL) {
    
  } else {
    
  }
  mode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mode);
  // @@protoc_insertion_point(field_set_allocated:WorldModel.mode)
}

// .GameState gameState = 6;
inline void WorldModel::clear_gamestate() {
  gamestate_ = 0;
}
inline ::GameState WorldModel::gamestate() const {
  // @@protoc_insertion_point(field_get:WorldModel.gameState)
  return static_cast< ::GameState >(gamestate_);
}
inline void WorldModel::set_gamestate(::GameState value) {
  
  gamestate_ = value;
  // @@protoc_insertion_point(field_set:WorldModel.gameState)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::GameState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::GameState>() {
  return ::GameState_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto
