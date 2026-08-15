#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/EncodedAudioBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EncodedAudioBuffer)
namespace Dissonance::Audio::Playback {
class EncodedAudioBuffer_VoicePacketComparer;
}
namespace Dissonance::Datastructures {
class PacketLossCalculator;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance {
class Log;
}
namespace HandyCollections::Heap {
template<typename T>
class MinHeap_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class EncodedAudioBuffer;
}
namespace Dissonance::Audio::Playback {
class EncodedAudioBuffer_VoicePacketComparer;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::EncodedAudioBuffer*);
MARK_REF_T(::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::EncodedAudioBuffer*, "Dissonance.Audio.Playback", "EncodedAudioBuffer");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer*, "Dissonance.Audio.Playback", "EncodedAudioBuffer/VoicePacketComparer");
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.EncodedAudioBuffer/VoicePacketComparer
class CORDL_TYPE EncodedAudioBuffer_VoicePacketComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>*() noexcept;

/// @brief Method Compare, addr 0x1805ed820, size 0x20, virtual true, abstract: false, final true
inline int32_t Compare(::Dissonance::Networking::VoicePacket  x, ::Dissonance::Networking::VoicePacket  y) ;

static inline ::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>"
constexpr ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::VoicePacket>* i___System__Collections__Generic__IComparer_1___Dissonance__Networking__VoicePacket_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncodedAudioBuffer_VoicePacketComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncodedAudioBuffer_VoicePacketComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncodedAudioBuffer_VoicePacketComparer(EncodedAudioBuffer_VoicePacketComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncodedAudioBuffer_VoicePacketComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncodedAudioBuffer_VoicePacketComparer(EncodedAudioBuffer_VoicePacketComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.EncodedAudioBuffer
class CORDL_TYPE EncodedAudioBuffer : public ::System::Object {
public:
// Declarations
using VoicePacketComparer = ::Dissonance::Audio::Playback::EncodedAudioBuffer_VoicePacketComparer;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

 __declspec(property(get=get_SequenceNumber, put=set_SequenceNumber)) uint32_t  SequenceNumber;

/// @brief Field <SequenceNumber>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SequenceNumber_k__BackingField, put=__cordl_internal_set__SequenceNumber_k__BackingField)) uint32_t  _SequenceNumber_k__BackingField;

/// @brief Field _complete, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__complete, put=__cordl_internal_set__complete)) bool  _complete;

/// @brief Field _count, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _droppedFrameHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__droppedFrameHandler, put=__cordl_internal_set__droppedFrameHandler)) ::System::Action_1<::Dissonance::Networking::VoicePacket>*  _droppedFrameHandler;

/// @brief Field _heap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__heap, put=__cordl_internal_set__heap)) ::HandyCollections::Heap::MinHeap_1<::Dissonance::Networking::VoicePacket>*  _heap;

/// @brief Field _loss, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loss, put=__cordl_internal_set__loss)) ::Dissonance::Datastructures::PacketLossCalculator*  _loss;

/// @brief Field _noNextPacketCounter, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__noNextPacketCounter, put=__cordl_internal_set__noNextPacketCounter)) int32_t  _noNextPacketCounter;

/// @brief Method IsComplete, addr 0x1805dd150, size 0x40, virtual false, abstract: false, final false
inline bool IsComplete() ;

static inline ::Dissonance::Audio::Playback::EncodedAudioBuffer* New_ctor(::System::Action_1<::Dissonance::Networking::VoicePacket>*  droppedFrameHandler) ;

/// @brief Method Push, addr 0x1805dd190, size 0xd0, virtual false, abstract: false, final false
inline void Push(::Dissonance::Networking::VoicePacket  frame) ;

/// @brief Method Read, addr 0x1805dd260, size 0x390, virtual false, abstract: false, final false
inline bool Read(::by_ref<::System::Nullable_1<::Dissonance::Networking::VoicePacket>>  frame, ::by_ref<bool>  lostPacket) ;

/// @brief Method Reset, addr 0x1805dd5f0, size 0x100, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Stop, addr 0x1805dd6f0, size 0x10, virtual false, abstract: false, final false
inline void Stop() ;

constexpr uint32_t const& __cordl_internal_get__SequenceNumber_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__SequenceNumber_k__BackingField() ;

constexpr bool const& __cordl_internal_get__complete() const;

constexpr bool& __cordl_internal_get__complete() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& __cordl_internal_get__droppedFrameHandler() const;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& __cordl_internal_get__droppedFrameHandler() ;

constexpr ::HandyCollections::Heap::MinHeap_1<::Dissonance::Networking::VoicePacket>* const& __cordl_internal_get__heap() const;

constexpr ::HandyCollections::Heap::MinHeap_1<::Dissonance::Networking::VoicePacket>*& __cordl_internal_get__heap() ;

constexpr ::Dissonance::Datastructures::PacketLossCalculator* const& __cordl_internal_get__loss() const;

constexpr ::Dissonance::Datastructures::PacketLossCalculator*& __cordl_internal_get__loss() ;

constexpr int32_t const& __cordl_internal_get__noNextPacketCounter() const;

constexpr int32_t& __cordl_internal_get__noNextPacketCounter() ;

constexpr void __cordl_internal_set__SequenceNumber_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__complete(bool  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__droppedFrameHandler(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

constexpr void __cordl_internal_set__heap(::HandyCollections::Heap::MinHeap_1<::Dissonance::Networking::VoicePacket>*  value) ;

constexpr void __cordl_internal_set__loss(::Dissonance::Datastructures::PacketLossCalculator*  value) ;

constexpr void __cordl_internal_set__noNextPacketCounter(int32_t  value) ;

/// @brief Method .ctor, addr 0x1805dd750, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::Dissonance::Networking::VoicePacket>*  droppedFrameHandler) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Count, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_PacketLoss, addr 0x1805dd830, size 0x70, virtual false, abstract: false, final false
inline float_t get_PacketLoss() ;

/// @brief Method get_SequenceNumber, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SequenceNumber() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_SequenceNumber, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_SequenceNumber(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncodedAudioBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncodedAudioBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncodedAudioBuffer(EncodedAudioBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncodedAudioBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncodedAudioBuffer(EncodedAudioBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16970};

/// @brief Field _heap, offset: 0x10, size: 0x8, def value: None
 ::HandyCollections::Heap::MinHeap_1<::Dissonance::Networking::VoicePacket>*  ____heap;

/// @brief Field _droppedFrameHandler, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::VoicePacket>*  ____droppedFrameHandler;

/// @brief Field _complete, offset: 0x20, size: 0x1, def value: None
 bool  ____complete;

/// @brief Field _count, offset: 0x24, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field _noNextPacketCounter, offset: 0x28, size: 0x4, def value: None
 int32_t  ____noNextPacketCounter;

/// @brief Field <SequenceNumber>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ____SequenceNumber_k__BackingField;

/// @brief Field _loss, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Datastructures::PacketLossCalculator*  ____loss;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::EncodedAudioBuffer, ____heap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::EncodedAudioBuffer, ____droppedFrameHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::EncodedAudioBuffer, ____complete) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::EncodedAudioBuffer, ____count) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::EncodedAudioBuffer, ____noNextPacketCounter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::EncodedAudioBuffer, ____SequenceNumber_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::EncodedAudioBuffer, ____loss) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::EncodedAudioBuffer) == 0x38, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
