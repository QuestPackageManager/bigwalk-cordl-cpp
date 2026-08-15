#pragma once
// IWYU pragma private; include "GlobalNamespace/LoudnessMeter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoudnessMeter)
namespace GlobalNamespace {
struct LoudnessMeter_LoudnessMeterType;
}
// Forward declare root types
namespace GlobalNamespace {
struct LoudnessMeter_LoudnessMeterType;
}
namespace GlobalNamespace {
class LoudnessMeter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LoudnessMeter_LoudnessMeterType);
MARK_REF_T(::GlobalNamespace::LoudnessMeter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LoudnessMeter_LoudnessMeterType, "", "LoudnessMeter/LoudnessMeterType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LoudnessMeter*, "", "LoudnessMeter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LoudnessMeter/LoudnessMeterType
struct CORDL_TYPE LoudnessMeter_LoudnessMeterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoudnessMeter_LoudnessMeterType_Unwrapped
enum struct __LoudnessMeter_LoudnessMeterType_Unwrapped : int32_t {
__E_Peak = static_cast<int32_t>(0x0),
__E_RMS = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoudnessMeter_LoudnessMeterType_Unwrapped () const noexcept {
return static_cast<__LoudnessMeter_LoudnessMeterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoudnessMeter_LoudnessMeterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoudnessMeter_LoudnessMeterType(int32_t  value__) noexcept;

/// @brief Field Peak value: I32(0)
static ::GlobalNamespace::LoudnessMeter_LoudnessMeterType const Peak;

/// @brief Field RMS value: I32(1)
static ::GlobalNamespace::LoudnessMeter_LoudnessMeterType const RMS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17618};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoudnessMeter_LoudnessMeterType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LoudnessMeter_LoudnessMeterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioFilterBase, LoudnessMeter::LoudnessMeterType
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoudnessMeter
class CORDL_TYPE LoudnessMeter : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
using LoudnessMeterType = ::GlobalNamespace::LoudnessMeter_LoudnessMeterType;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(get=get_ChannelLevels, put=set_ChannelLevels)) ::ArrayW<float_t>  ChannelLevels;

 __declspec(property(get=get_ChannelLevelsLerped, put=set_ChannelLevelsLerped)) ::ArrayW<float_t>  ChannelLevelsLerped;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field LerpSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_LerpSpeed, put=__cordl_internal_set_LerpSpeed)) float_t  LerpSpeed;

/// @brief Field MeterType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MeterType, put=__cordl_internal_set_MeterType)) ::GlobalNamespace::LoudnessMeter_LoudnessMeterType  MeterType;

/// @brief Field <ChannelLevelsLerped>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChannelLevelsLerped_k__BackingField, put=__cordl_internal_set__ChannelLevelsLerped_k__BackingField)) ::ArrayW<float_t>  _ChannelLevelsLerped_k__BackingField;

/// @brief Field <ChannelLevels>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChannelLevels_k__BackingField, put=__cordl_internal_set__ChannelLevels_k__BackingField)) ::ArrayW<float_t>  _ChannelLevels_k__BackingField;

/// @brief Field _bypass, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _internalBypass, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Method GetAvg, addr 0x18049f280, size 0x50, virtual false, abstract: false, final false
inline float_t GetAvg() ;

static inline ::GlobalNamespace::LoudnessMeter* New_ctor() ;

/// @brief Method ProcessSamples, addr 0x18049f2d0, size 0x1c0, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method UpdateVariables, addr 0x18049f490, size 0xf0, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get_LerpSpeed() const;

constexpr float_t& __cordl_internal_get_LerpSpeed() ;

constexpr ::GlobalNamespace::LoudnessMeter_LoudnessMeterType const& __cordl_internal_get_MeterType() const;

constexpr ::GlobalNamespace::LoudnessMeter_LoudnessMeterType& __cordl_internal_get_MeterType() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ChannelLevelsLerped_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ChannelLevelsLerped_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ChannelLevels_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ChannelLevels_k__BackingField() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr void __cordl_internal_set_LerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_MeterType(::GlobalNamespace::LoudnessMeter_LoudnessMeterType  value) ;

constexpr void __cordl_internal_set__ChannelLevelsLerped_k__BackingField(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__ChannelLevels_k__BackingField(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

/// @brief Method .ctor, addr 0x18049f580, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x18049a520, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_ChannelLevels, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_ChannelLevels() ;

/// @brief Method get_ChannelLevelsLerped, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_ChannelLevelsLerped() ;

/// @brief Method get_InternalBypass, addr 0x1803023c0, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x18049a540, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_ChannelLevels, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_ChannelLevels(::ArrayW<float_t>  value) ;

/// @brief Method set_ChannelLevelsLerped, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_ChannelLevelsLerped(::ArrayW<float_t>  value) ;

/// @brief Method set_InternalBypass, addr 0x180323260, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoudnessMeter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoudnessMeter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoudnessMeter(LoudnessMeter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoudnessMeter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoudnessMeter(LoudnessMeter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17619};

/// @brief Field MeterType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::LoudnessMeter_LoudnessMeterType  ___MeterType;

/// @brief Field LerpSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___LerpSpeed;

/// @brief Field <ChannelLevels>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ChannelLevels_k__BackingField;

/// @brief Field <ChannelLevelsLerped>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ChannelLevelsLerped_k__BackingField;

/// @brief Field _internalBypass, offset: 0x38, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x39, size: 0x1, def value: None
 bool  ____bypass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoudnessMeter, ___MeterType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoudnessMeter, ___LerpSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoudnessMeter, ____ChannelLevels_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoudnessMeter, ____ChannelLevelsLerped_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoudnessMeter, ____internalBypass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoudnessMeter, ____bypass) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LoudnessMeter) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
