#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCConstant.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioRTPCConstant)
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
class AudioRTPCConstant;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioRTPCConstant*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCConstant*, "", "AudioRTPCConstant");
// Dependencies AudioRTPC::YAxisType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPCConstant
class CORDL_TYPE AudioRTPCConstant : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ConstantValue)) float_t  ConstantValue;

 __declspec(property(get=get_YAxis, put=set_YAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  YAxis;

/// @brief Field _constantValue, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__constantValue, put=__cordl_internal_set__constantValue)) float_t  _constantValue;

/// @brief Field _yAxis, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  _yAxis;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr operator  ::GlobalNamespace::IAudioRTPCValue*() noexcept;

/// @brief Method ChangeValue, addr 0x18048b280, size 0x20, virtual false, abstract: false, final false
inline void ChangeValue(float_t  val) ;

/// @brief Method GetValue, addr 0x18048b2a0, size 0x20, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPCY GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider) ;

static inline ::GlobalNamespace::AudioRTPCConstant* New_ctor(::GlobalNamespace::AudioRTPC_YAxisType  yType, float_t  val) ;

constexpr float_t const& __cordl_internal_get__constantValue() const;

constexpr float_t& __cordl_internal_get__constantValue() ;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& __cordl_internal_get__yAxis() const;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType& __cordl_internal_get__yAxis() ;

constexpr void __cordl_internal_set__constantValue(float_t  value) ;

constexpr void __cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

/// @brief Method .ctor, addr 0x18048b2c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioRTPC_YAxisType  yType, float_t  val) ;

/// @brief Method get_ConstantValue, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_ConstantValue() ;

/// @brief Method get_YAxis, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::AudioRTPC_YAxisType get_YAxis() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* i___GlobalNamespace__IAudioRTPCValue() noexcept;

/// @brief Method set_YAxis, addr 0x180378ff0, size 0x10, virtual true, abstract: false, final true
inline void set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCConstant() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCConstant", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPCConstant(AudioRTPCConstant && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPCConstant", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPCConstant(AudioRTPCConstant const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17561};

/// @brief Field _yAxis, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_YAxisType  ____yAxis;

/// @brief Field _constantValue, offset: 0x14, size: 0x4, def value: None
 float_t  ____constantValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCConstant, ____yAxis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCConstant, ____constantValue) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCConstant) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
