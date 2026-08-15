#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
CORDL_MODULE_EXPORT(AudioRTPCAsset)
namespace GlobalNamespace {
class AudioRTPCTerm;
}
namespace GlobalNamespace {
struct AudioRTPCY;
}
namespace GlobalNamespace {
struct AudioRTPC_YAxisType;
}
namespace GlobalNamespace {
class IAudioRTPCValue;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioRTPCAsset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioRTPCAsset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCAsset*, "", "AudioRTPCAsset");
// Dependencies AudioAsset, AudioRTPC::YAxisType
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPCAsset
class CORDL_TYPE AudioRTPCAsset : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
/// @brief Field RTPC, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RTPC, put=__cordl_internal_set_RTPC)) ::GlobalNamespace::AudioRTPCTerm*  RTPC;

 __declspec(property(get=get_YAxis, put=set_YAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  YAxis;

/// @brief Field _yAxis, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  _yAxis;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr operator  ::GlobalNamespace::IAudioRTPCValue*() noexcept;

/// @brief Method CheckNullRTPCAsset, addr 0x18048af90, size 0x100, virtual false, abstract: false, final false
static inline bool CheckNullRTPCAsset(::GlobalNamespace::AudioRTPCTerm*  term) ;

/// @brief Method GetValue, addr 0x18048b090, size 0x20, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPCY GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider) ;

static inline ::GlobalNamespace::AudioRTPCAsset* New_ctor() ;

/// @brief Method OnEnable, addr 0x18048b0b0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PasteTermToRTPCAsset, addr 0x18048b110, size 0x30, virtual false, abstract: false, final false
inline void PasteTermToRTPCAsset(::GlobalNamespace::AudioRTPCTerm*  term) ;

/// @brief Method ValidateRTPCFile, addr 0x18048b140, size 0x140, virtual false, abstract: false, final false
inline void ValidateRTPCFile(::GlobalNamespace::AudioRTPCTerm*  term) ;

constexpr ::GlobalNamespace::AudioRTPCTerm* const& __cordl_internal_get_RTPC() const;

constexpr ::GlobalNamespace::AudioRTPCTerm*& __cordl_internal_get_RTPC() ;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& __cordl_internal_get__yAxis() const;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType& __cordl_internal_get__yAxis() ;

constexpr void __cordl_internal_set_RTPC(::GlobalNamespace::AudioRTPCTerm*  value) ;

constexpr void __cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_YAxis, addr 0x1802f41a0, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPC_YAxisType get_YAxis() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* i___GlobalNamespace__IAudioRTPCValue() noexcept;

/// @brief Method set_YAxis, addr 0x1802f4390, size 0x10, virtual true, abstract: false, final true
inline void set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPCAsset(AudioRTPCAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPCAsset(AudioRTPCAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17564};

/// @brief Field _yAxis, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_YAxisType  ____yAxis;

/// @brief Field RTPC, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::AudioRTPCTerm*  ___RTPC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCAsset, ____yAxis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCAsset, ___RTPC) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCAsset) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
