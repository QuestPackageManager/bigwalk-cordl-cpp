#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/EncodedAudioBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__EncodedAudioBuffer_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__EncodedAudioBuffer_def.hpp"
#include "Dissonance/Datastructures/zzzz__PacketLossCalculator_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "HandyCollections/Heap/zzzz__MinHeap_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::*)(::Dissonance::Networking::VoicePacket, ::Dissonance::Networking::VoicePacket)>(&::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::Compare)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>(), ::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::*)()>(&::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::Compare(::Dissonance::Networking::VoicePacket  x, ::Dissonance::Networking::VoicePacket  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>(), ::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer* Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>"
constexpr  Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::operator ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>"
constexpr ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>* Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::i___System__Collections__Generic__IComparer_1___Dissonance__Networking__VoicePacket_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer::EncodedAudioBuffer_VoicePacketComparer()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)()>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::get_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.get_SequenceNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)()>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::get_SequenceNumber)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"get_SequenceNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.set_SequenceNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)(uint32_t)>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::set_SequenceNumber)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"set_SequenceNumber", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)()>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::get_PacketLoss)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805dd830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)(::System::Action_1<::Dissonance::Networking::VoicePacket>*)>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805dd750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.Push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::Push)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805dd190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"Push", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)()>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::Stop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805dd6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)(::by_ref<::System::Nullable_1<::Dissonance::Networking::VoicePacket>>, ::by_ref<bool>)>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::Read)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1805dd260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<::System::Nullable_1<::Dissonance::Networking::VoicePacket>>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)()>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::Reset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805dd5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::EncodedAudioBuffer.IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::EncodedAudioBuffer::*)()>(&::Dissonance::Audio::Playback::EncodedAudioBuffer::IsComplete)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805dd150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::HandyCollections::Heap::MinHeap_1<::Dissonance::Networking::VoicePacket>*& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__heap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heap;
}
constexpr ::HandyCollections::Heap::MinHeap_1<::Dissonance::Networking::VoicePacket>* const& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__heap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heap;
}
constexpr void Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_set__heap(::HandyCollections::Heap::MinHeap_1<::Dissonance::Networking::VoicePacket>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heap = value;
}
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__droppedFrameHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droppedFrameHandler;
}
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__droppedFrameHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droppedFrameHandler;
}
constexpr void Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_set__droppedFrameHandler(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droppedFrameHandler = value;
}
constexpr bool& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__complete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complete;
}
constexpr bool const& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__complete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complete;
}
constexpr void Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_set__complete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____complete = value;
}
constexpr int32_t& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
constexpr int32_t& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__noNextPacketCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noNextPacketCounter;
}
constexpr int32_t const& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__noNextPacketCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noNextPacketCounter;
}
constexpr void Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_set__noNextPacketCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noNextPacketCounter = value;
}
constexpr uint32_t& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__SequenceNumber_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SequenceNumber_k__BackingField;
}
constexpr uint32_t const& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__SequenceNumber_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SequenceNumber_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_set__SequenceNumber_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SequenceNumber_k__BackingField = value;
}
constexpr ::Dissonance::Datastructures::PacketLossCalculator*& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__loss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loss;
}
constexpr ::Dissonance::Datastructures::PacketLossCalculator* const& Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_get__loss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loss;
}
constexpr void Dissonance::Audio::Playback::EncodedAudioBuffer::__cordl_internal_set__loss(::Dissonance::Datastructures::PacketLossCalculator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loss = value;
}
inline void Dissonance::Audio::Playback::EncodedAudioBuffer::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::EncodedAudioBuffer*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::EncodedAudioBuffer::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::EncodedAudioBuffer*>();
}
inline int32_t Dissonance::Audio::Playback::EncodedAudioBuffer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t Dissonance::Audio::Playback::EncodedAudioBuffer::get_SequenceNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"get_SequenceNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::EncodedAudioBuffer::set_SequenceNumber(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"set_SequenceNumber", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Playback::EncodedAudioBuffer::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::EncodedAudioBuffer::_ctor(::System::Action_1<::Dissonance::Networking::VoicePacket>*  droppedFrameHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, droppedFrameHandler);
}
inline void Dissonance::Audio::Playback::EncodedAudioBuffer::Push(::Dissonance::Networking::VoicePacket  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"Push", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void Dissonance::Audio::Playback::EncodedAudioBuffer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::Audio::Playback::EncodedAudioBuffer::Read(::by_ref<::System::Nullable_1<::Dissonance::Networking::VoicePacket>>  frame, ::by_ref<bool>  lostPacket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<::System::Nullable_1<::Dissonance::Networking::VoicePacket>>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame, lostPacket);
}
inline void Dissonance::Audio::Playback::EncodedAudioBuffer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::Audio::Playback::EncodedAudioBuffer::IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(),
                        {"IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::EncodedAudioBuffer* Dissonance::Audio::Playback::EncodedAudioBuffer::New_ctor(::System::Action_1<::Dissonance::Networking::VoicePacket>*  droppedFrameHandler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::EncodedAudioBuffer*>(droppedFrameHandler));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::EncodedAudioBuffer::EncodedAudioBuffer()   {
}
