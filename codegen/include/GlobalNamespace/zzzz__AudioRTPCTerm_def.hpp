#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCTerm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioRTPCTerm)
namespace GlobalNamespace {
class AudioRTPCAssetWrapper;
}
namespace GlobalNamespace {
struct AudioRTPCTerm_TermType;
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
struct AudioRTPCTerm_TermType;
}
namespace GlobalNamespace {
class AudioRTPCTerm;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioRTPCTerm_TermType);
MARK_REF_T(::GlobalNamespace::AudioRTPCTerm*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCTerm_TermType, "", "AudioRTPCTerm/TermType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCTerm*, "", "AudioRTPCTerm");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioRTPCTerm/TermType
struct CORDL_TYPE AudioRTPCTerm_TermType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioRTPCTerm_TermType_Unwrapped
enum struct __AudioRTPCTerm_TermType_Unwrapped : int32_t {
__E_Constant = static_cast<int32_t>(0x0),
__E_RTPC = static_cast<int32_t>(0x1),
__E_RTPCAsset = static_cast<int32_t>(0x2),
__E_Multiply = static_cast<int32_t>(0x3),
__E_Sum = static_cast<int32_t>(0x4),
__E_Subtraction = static_cast<int32_t>(0x5),
__E_Max = static_cast<int32_t>(0x6),
__E_Min = static_cast<int32_t>(0x7),
__E_None = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioRTPCTerm_TermType_Unwrapped () const noexcept {
return static_cast<__AudioRTPCTerm_TermType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCTerm_TermType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioRTPCTerm_TermType(int32_t  value__) noexcept;

/// @brief Field Constant value: I32(0)
static ::GlobalNamespace::AudioRTPCTerm_TermType const Constant;

/// @brief Field Max value: I32(6)
static ::GlobalNamespace::AudioRTPCTerm_TermType const Max;

/// @brief Field Min value: I32(7)
static ::GlobalNamespace::AudioRTPCTerm_TermType const Min;

/// @brief Field Multiply value: I32(3)
static ::GlobalNamespace::AudioRTPCTerm_TermType const Multiply;

/// @brief Field None value: I32(8)
static ::GlobalNamespace::AudioRTPCTerm_TermType const None;

/// @brief Field RTPC value: I32(1)
static ::GlobalNamespace::AudioRTPCTerm_TermType const RTPC;

/// @brief Field RTPCAsset value: I32(2)
static ::GlobalNamespace::AudioRTPCTerm_TermType const RTPCAsset;

/// @brief Field Subtraction value: I32(5)
static ::GlobalNamespace::AudioRTPCTerm_TermType const Subtraction;

/// @brief Field Sum value: I32(4)
static ::GlobalNamespace::AudioRTPCTerm_TermType const Sum;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17557};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCTerm_TermType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCTerm_TermType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioRTPC::YAxisType, AudioRTPCTerm::TermType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPCTerm
class CORDL_TYPE AudioRTPCTerm : public ::System::Object {
public:
// Declarations
using TermType = ::GlobalNamespace::AudioRTPCTerm_TermType;

 __declspec(property(get=get_Type)) ::GlobalNamespace::AudioRTPCTerm_TermType  Type;

 __declspec(property(get=get_Value)) ::GlobalNamespace::IAudioRTPCValue*  Value;

 __declspec(property(get=get_YAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  YAxis;

/// @brief Field _type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::GlobalNamespace::AudioRTPCTerm_TermType  _type;

/// @brief Field _value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::GlobalNamespace::IAudioRTPCValue*  _value;

/// @brief Field _yAxis, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  _yAxis;

/// @brief Method ChangeType, addr 0x18048ba70, size 0x160, virtual false, abstract: false, final false
inline void ChangeType(::GlobalNamespace::AudioRTPCTerm_TermType  termType) ;

/// @brief Method ChangeYAxis, addr 0x18048bbd0, size 0x1f0, virtual false, abstract: false, final false
inline void ChangeYAxis(::GlobalNamespace::AudioRTPC_YAxisType  yType) ;

/// @brief Method Clone, addr 0x18048bdc0, size 0x5a0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AudioRTPCTerm* Clone(::GlobalNamespace::AudioRTPCTerm*  sourceTerm, ::GlobalNamespace::AudioRTPC_YAxisType  newYAxis) ;

/// @brief Method GetValue, addr 0x18048c360, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCY GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider) ;

static inline ::GlobalNamespace::AudioRTPCTerm* New_ctor(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yAxisType, float_t  constantValue, ::GlobalNamespace::AudioRTPCAssetWrapper*  asset) ;

constexpr ::GlobalNamespace::AudioRTPCTerm_TermType const& __cordl_internal_get__type() const;

constexpr ::GlobalNamespace::AudioRTPCTerm_TermType& __cordl_internal_get__type() ;

constexpr ::GlobalNamespace::IAudioRTPCValue* const& __cordl_internal_get__value() const;

constexpr ::GlobalNamespace::IAudioRTPCValue*& __cordl_internal_get__value() ;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& __cordl_internal_get__yAxis() const;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType& __cordl_internal_get__yAxis() ;

constexpr void __cordl_internal_set__type(::GlobalNamespace::AudioRTPCTerm_TermType  value) ;

constexpr void __cordl_internal_set__value(::GlobalNamespace::IAudioRTPCValue*  value) ;

constexpr void __cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

/// @brief Method .ctor, addr 0x18048c470, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yAxisType, float_t  constantValue, ::GlobalNamespace::AudioRTPCAssetWrapper*  asset) ;

/// @brief Method get_Type, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCTerm_TermType get_Type() ;

/// @brief Method get_Value, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::IAudioRTPCValue* get_Value() ;

/// @brief Method get_YAxis, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPC_YAxisType get_YAxis() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCTerm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCTerm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPCTerm(AudioRTPCTerm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCTerm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPCTerm(AudioRTPCTerm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17558};

/// @brief Field _type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPCTerm_TermType  ____type;

/// @brief Field _yAxis, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_YAxisType  ____yAxis;

/// @brief Field _value, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::IAudioRTPCValue*  ____value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCTerm, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCTerm, ____yAxis) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCTerm, ____value) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCTerm) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
