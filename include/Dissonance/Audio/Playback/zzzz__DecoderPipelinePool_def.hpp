#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/DecoderPipelinePool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderPipelinePool)
namespace Dissonance::Audio::Playback {
class DecoderPipelinePool___c__DisplayClass2_0;
}
namespace Dissonance::Audio::Playback {
class DecoderPipeline;
}
namespace Dissonance::Audio::Playback {
struct FrameFormat;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class DecoderPipelinePool;
}
namespace Dissonance::Audio::Playback {
class DecoderPipelinePool___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::DecoderPipelinePool*);
MARK_REF_T(::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::DecoderPipelinePool*, "Dissonance.Audio.Playback", "DecoderPipelinePool");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*, "Dissonance.Audio.Playback", "DecoderPipelinePool/<>c__DisplayClass2_0");
// Dependencies Dissonance.Audio.Playback.FrameFormat, System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.DecoderPipelinePool/<>c__DisplayClass2_0
class CORDL_TYPE DecoderPipelinePool___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  __9__1;

/// @brief Field format, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_format, put=__cordl_internal_set_format)) ::Dissonance::Audio::Playback::FrameFormat  format;

static inline ::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <GetPool>b__0, addr 0x1805ed310, size 0x100, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::DecoderPipeline* _GetPool_b__0() ;

/// @brief Method <GetPool>b__1, addr 0x1805ed410, size 0xb0, virtual false, abstract: false, final false
inline void _GetPool_b__1(::Dissonance::Audio::Playback::DecoderPipeline*  p) ;

constexpr ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*& __cordl_internal_get___9__1() ;

constexpr ::Dissonance::Audio::Playback::FrameFormat const& __cordl_internal_get_format() const;

constexpr ::Dissonance::Audio::Playback::FrameFormat& __cordl_internal_get_format() ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  value) ;

constexpr void __cordl_internal_set_format(::Dissonance::Audio::Playback::FrameFormat  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoderPipelinePool___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipelinePool___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoderPipelinePool___c__DisplayClass2_0(DecoderPipelinePool___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipelinePool___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoderPipelinePool___c__DisplayClass2_0(DecoderPipelinePool___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16966};

/// @brief Field format, offset: 0x10, size: 0x18, def value: None
 ::Dissonance::Audio::Playback::FrameFormat  ___format;

/// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0, ___format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0, _____9__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0) == 0x30, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.DecoderPipelinePool
class CORDL_TYPE DecoderPipelinePool : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0;

/// @brief Field Pools, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pools, put=setStaticF_Pools)) ::System::Collections::Generic::Dictionary_2<::Dissonance::Audio::Playback::FrameFormat,::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>*  Pools;

/// @brief Field _nextPipelineId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__nextPipelineId, put=setStaticF__nextPipelineId)) int32_t  _nextPipelineId;

/// @brief Method GetDecoderPipeline, addr 0x1805dba00, size 0xe0, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::Playback::DecoderPipeline* GetDecoderPipeline(::Dissonance::Audio::Playback::FrameFormat  format, ::Dissonance::Audio::Playback::IVolumeProvider*  volume) ;

/// @brief Method GetPool, addr 0x1805dbae0, size 0x170, virtual false, abstract: false, final false
static inline ::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>* GetPool(::Dissonance::Audio::Playback::FrameFormat  format) ;

/// @brief Method Recycle, addr 0x1805dbc50, size 0x50, virtual false, abstract: false, final false
static inline void Recycle(::Dissonance::Audio::Playback::FrameFormat  format, ::Dissonance::Audio::Playback::DecoderPipeline*  pipeline) ;

static inline ::System::Collections::Generic::Dictionary_2<::Dissonance::Audio::Playback::FrameFormat,::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>* getStaticF_Pools() ;

static inline int32_t getStaticF__nextPipelineId() ;

static inline void setStaticF_Pools(::System::Collections::Generic::Dictionary_2<::Dissonance::Audio::Playback::FrameFormat,::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>*  value) ;

static inline void setStaticF__nextPipelineId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoderPipelinePool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipelinePool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoderPipelinePool(DecoderPipelinePool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipelinePool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoderPipelinePool(DecoderPipelinePool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Playback::DecoderPipelinePool) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
