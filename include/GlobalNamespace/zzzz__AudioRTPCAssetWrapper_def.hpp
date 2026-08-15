#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCAssetWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioRTPCAssetWrapper)
namespace GlobalNamespace {
class AudioRTPCAsset;
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
class AudioRTPCAssetWrapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioRTPCAssetWrapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCAssetWrapper*, "", "AudioRTPCAssetWrapper");
// Dependencies AudioRTPC::YAxisType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPCAssetWrapper
class CORDL_TYPE AudioRTPCAssetWrapper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Asset)) ::UnityW<::GlobalNamespace::AudioRTPCAsset>  Asset;

 __declspec(property(get=get_YAxis, put=set_YAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  YAxis;

/// @brief Field _asset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__asset, put=__cordl_internal_set__asset)) ::UnityW<::GlobalNamespace::AudioRTPCAsset>  _asset;

/// @brief Field _yAxis, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  _yAxis;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr operator  ::GlobalNamespace::IAudioRTPCValue*() noexcept;

/// @brief Method AssignAsset, addr 0x18048aee0, size 0x60, virtual false, abstract: false, final false
inline void AssignAsset(::GlobalNamespace::AudioRTPCAsset*  asset) ;

/// @brief Method GetValue, addr 0x18048af40, size 0x30, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPCY GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider) ;

static inline ::GlobalNamespace::AudioRTPCAssetWrapper* New_ctor(::GlobalNamespace::AudioRTPC_YAxisType  yType, ::GlobalNamespace::AudioRTPCAsset*  asset) ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCAsset> const& __cordl_internal_get__asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCAsset>& __cordl_internal_get__asset() ;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& __cordl_internal_get__yAxis() const;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType& __cordl_internal_get__yAxis() ;

constexpr void __cordl_internal_set__asset(::UnityW<::GlobalNamespace::AudioRTPCAsset>  value) ;

constexpr void __cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

/// @brief Method .ctor, addr 0x18048af70, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioRTPC_YAxisType  yType, ::GlobalNamespace::AudioRTPCAsset*  asset) ;

/// @brief Method get_Asset, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRTPCAsset> get_Asset() ;

/// @brief Method get_YAxis, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPC_YAxisType get_YAxis() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* i___GlobalNamespace__IAudioRTPCValue() noexcept;

/// @brief Method set_YAxis, addr 0x180378ff0, size 0x10, virtual true, abstract: false, final true
inline void set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCAssetWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCAssetWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPCAssetWrapper(AudioRTPCAssetWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCAssetWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPCAssetWrapper(AudioRTPCAssetWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17563};

/// @brief Field _yAxis, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_YAxisType  ____yAxis;

/// @brief Field _asset, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCAsset>  ____asset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCAssetWrapper, ____yAxis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCAssetWrapper, ____asset) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCAssetWrapper) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
