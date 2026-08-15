#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCXProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioRTPCXProvider)
namespace GlobalNamespace {
class AudioRTPCXProvider_RTPCXData;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
namespace GlobalNamespace {
class AudioRTPCXProvider_RTPCXData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioRTPCXProvider*);
MARK_REF_T(::GlobalNamespace::AudioRTPCXProvider_RTPCXData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCXProvider*, "", "AudioRTPCXProvider");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCXProvider_RTPCXData*, "", "AudioRTPCXProvider/RTPCXData");
// Dependencies AudioRTPC::XAxisType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPCXProvider/RTPCXData
class CORDL_TYPE AudioRTPCXProvider_RTPCXData : public ::System::Object {
public:
// Declarations
/// @brief Field Value, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) float_t  Value;

/// @brief Field XType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_XType, put=__cordl_internal_set_XType)) ::GlobalNamespace::AudioRTPC_XAxisType  XType;

static inline ::GlobalNamespace::AudioRTPCXProvider_RTPCXData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Value() const;

constexpr float_t& __cordl_internal_get_Value() ;

constexpr ::GlobalNamespace::AudioRTPC_XAxisType const& __cordl_internal_get_XType() const;

constexpr ::GlobalNamespace::AudioRTPC_XAxisType& __cordl_internal_get_XType() ;

constexpr void __cordl_internal_set_Value(float_t  value) ;

constexpr void __cordl_internal_set_XType(::GlobalNamespace::AudioRTPC_XAxisType  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCXProvider_RTPCXData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCXProvider_RTPCXData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPCXProvider_RTPCXData(AudioRTPCXProvider_RTPCXData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCXProvider_RTPCXData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPCXProvider_RTPCXData(AudioRTPCXProvider_RTPCXData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17565};

/// @brief Field XType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_XAxisType  ___XType;

/// @brief Field Value, offset: 0x14, size: 0x4, def value: None
 float_t  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCXProvider_RTPCXData, ___XType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCXProvider_RTPCXData, ___Value) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCXProvider_RTPCXData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioAsset, AudioRTPCXProvider::RTPCXData
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPCXProvider
class CORDL_TYPE AudioRTPCXProvider : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
using RTPCXData = ::GlobalNamespace::AudioRTPCXProvider_RTPCXData;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

 __declspec(property(get=get_XValueLookup, put=set_XValueLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*  XValueLookup;

/// @brief Field XValues, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_XValues, put=__cordl_internal_set_XValues)) ::ArrayW<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>  XValues;

/// @brief Field <XValueLookup>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__XValueLookup_k__BackingField, put=__cordl_internal_set__XValueLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*  _XValueLookup_k__BackingField;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method GetX, addr 0x18048c5b0, size 0x60, virtual true, abstract: false, final true
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::AudioRTPCXProvider* New_ctor() ;

/// @brief Method OnEnable, addr 0x18048c610, size 0x100, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetX, addr 0x18048c710, size 0x60, virtual false, abstract: false, final false
inline bool SetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, float_t  x) ;

constexpr ::ArrayW<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*> const& __cordl_internal_get_XValues() const;

constexpr ::ArrayW<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>& __cordl_internal_get_XValues() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>* const& __cordl_internal_get__XValueLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*& __cordl_internal_get__XValueLookup_k__BackingField() ;

constexpr void __cordl_internal_set_XValues(::ArrayW<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>  value) ;

constexpr void __cordl_internal_set__XValueLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*  value) ;

/// @brief Method .ctor, addr 0x18048c770, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_XProviderIdentifier, addr 0x18048c7c0, size 0x30, virtual true, abstract: false, final true
inline ::StringW get_XProviderIdentifier() ;

/// @brief Method get_XValueLookup, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>* get_XValueLookup() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

/// @brief Method set_XValueLookup, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_XValueLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCXProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCXProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPCXProvider(AudioRTPCXProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCXProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPCXProvider(AudioRTPCXProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17566};

/// @brief Field XValues, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>  ___XValues;

/// @brief Field <XValueLookup>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioRTPC_XAxisType,::GlobalNamespace::AudioRTPCXProvider_RTPCXData*>*  ____XValueLookup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCXProvider, ___XValues) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCXProvider, ____XValueLookup_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCXProvider) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
