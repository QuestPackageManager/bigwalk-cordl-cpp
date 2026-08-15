#pragma once
// IWYU pragma private; include "GlobalNamespace/Downsampler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Downsampler)
// Forward declare root types
namespace GlobalNamespace {
class Downsampler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Downsampler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Downsampler*, "", "Downsampler");
// Dependencies AudioFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: Downsampler
class CORDL_TYPE Downsampler : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_DownsampleFactor, put=set_DownsampleFactor)) int32_t  DownsampleFactor;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field _alpha, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__alpha, put=__cordl_internal_set__alpha)) float_t  _alpha;

/// @brief Field _bypass, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _downsampleCounter, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__downsampleCounter, put=__cordl_internal_set__downsampleCounter)) int32_t  _downsampleCounter;

/// @brief Field _downsampleFactor, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__downsampleFactor, put=__cordl_internal_set__downsampleFactor)) int32_t  _downsampleFactor;

/// @brief Field _filterState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterState, put=__cordl_internal_set__filterState)) ::ArrayW<float_t>  _filterState;

/// @brief Field _internalBypass, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field _lastSampleValues, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSampleValues, put=__cordl_internal_set__lastSampleValues)) ::ArrayW<float_t>  _lastSampleValues;

/// @brief Field _sampleRate, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Method Awake, addr 0x18049ec80, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::Downsampler* New_ctor() ;

/// @brief Method OnFactorChange, addr 0x18049ece0, size 0x50, virtual false, abstract: false, final false
inline void OnFactorChange() ;

/// @brief Method ProcessSamples, addr 0x18049ed30, size 0x240, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get__alpha() const;

constexpr float_t& __cordl_internal_get__alpha() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr int32_t const& __cordl_internal_get__downsampleCounter() const;

constexpr int32_t& __cordl_internal_get__downsampleCounter() ;

constexpr int32_t const& __cordl_internal_get__downsampleFactor() const;

constexpr int32_t& __cordl_internal_get__downsampleFactor() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__filterState() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__filterState() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__lastSampleValues() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__lastSampleValues() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr void __cordl_internal_set__alpha(float_t  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__downsampleCounter(int32_t  value) ;

constexpr void __cordl_internal_set__downsampleFactor(int32_t  value) ;

constexpr void __cordl_internal_set__filterState(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set__lastSampleValues(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0x18049ef70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x18049ef80, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_DownsampleFactor, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_DownsampleFactor() ;

/// @brief Method get_InternalBypass, addr 0x180468800, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x18049ef90, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_DownsampleFactor, addr 0x18049efa0, size 0x60, virtual false, abstract: false, final false
inline void set_DownsampleFactor(int32_t  value) ;

/// @brief Method set_InternalBypass, addr 0x180468810, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Downsampler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Downsampler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Downsampler(Downsampler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Downsampler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Downsampler(Downsampler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17617};

/// @brief Field _downsampleFactor, offset: 0x20, size: 0x4, def value: None
 int32_t  ____downsampleFactor;

/// @brief Field _lastSampleValues, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ____lastSampleValues;

/// @brief Field _filterState, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____filterState;

/// @brief Field _sampleRate, offset: 0x38, size: 0x4, def value: None
 int32_t  ____sampleRate;

/// @brief Field _alpha, offset: 0x3c, size: 0x4, def value: None
 float_t  ____alpha;

/// @brief Field _downsampleCounter, offset: 0x40, size: 0x4, def value: None
 int32_t  ____downsampleCounter;

/// @brief Field _internalBypass, offset: 0x44, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x45, size: 0x1, def value: None
 bool  ____bypass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Downsampler, ____downsampleFactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Downsampler, ____lastSampleValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Downsampler, ____filterState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Downsampler, ____sampleRate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Downsampler, ____alpha) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Downsampler, ____downsampleCounter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Downsampler, ____internalBypass) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Downsampler, ____bypass) == 0x45, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Downsampler) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
