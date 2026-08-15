#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCSingle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioRTPCSingle)
namespace GlobalNamespace {
struct AudioRTPCY;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
struct AudioRTPC_YAxisType;
}
namespace GlobalNamespace {
class AudioRTPC;
}
namespace GlobalNamespace {
class IAudioRTPCValue;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioRTPCSingle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioRTPCSingle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCSingle*, "", "AudioRTPCSingle");
// Dependencies AudioRTPC::YAxisType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPCSingle
class CORDL_TYPE AudioRTPCSingle : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_RTPC)) ::GlobalNamespace::AudioRTPC*  RTPC;

 __declspec(property(get=get_YAxis, put=set_YAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  YAxis;

/// @brief Field _rtpc, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rtpc, put=__cordl_internal_set__rtpc)) ::GlobalNamespace::AudioRTPC*  _rtpc;

/// @brief Field _yAxis, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  _yAxis;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr operator  ::GlobalNamespace::IAudioRTPCValue*() noexcept;

/// @brief Method ChangeRTPC, addr 0x18048b2f0, size 0xf0, virtual false, abstract: false, final false
inline void ChangeRTPC(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method GetValue, addr 0x18048b3e0, size 0x1a0, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPCY GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider) ;

static inline ::GlobalNamespace::AudioRTPCSingle* New_ctor(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType) ;

constexpr ::GlobalNamespace::AudioRTPC* const& __cordl_internal_get__rtpc() const;

constexpr ::GlobalNamespace::AudioRTPC*& __cordl_internal_get__rtpc() ;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& __cordl_internal_get__yAxis() const;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType& __cordl_internal_get__yAxis() ;

constexpr void __cordl_internal_set__rtpc(::GlobalNamespace::AudioRTPC*  value) ;

constexpr void __cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

/// @brief Method .ctor, addr 0x18048b580, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType) ;

/// @brief Method get_RTPC, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPC* get_RTPC() ;

/// @brief Method get_YAxis, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPC_YAxisType get_YAxis() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* i___GlobalNamespace__IAudioRTPCValue() noexcept;

/// @brief Method set_YAxis, addr 0x180378ff0, size 0x10, virtual true, abstract: false, final true
inline void set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCSingle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCSingle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPCSingle(AudioRTPCSingle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCSingle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPCSingle(AudioRTPCSingle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17562};

/// @brief Field _yAxis, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_YAxisType  ____yAxis;

/// @brief Field _rtpc, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::AudioRTPC*  ____rtpc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCSingle, ____yAxis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCSingle, ____rtpc) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCSingle) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
