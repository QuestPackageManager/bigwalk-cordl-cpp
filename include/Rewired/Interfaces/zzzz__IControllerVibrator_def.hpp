#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerVibrator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IControllerVibrator)
// Forward declare root types
namespace Rewired::Interfaces {
class IControllerVibrator;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IControllerVibrator*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IControllerVibrator*, "Rewired.Interfaces", "IControllerVibrator");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IControllerVibrator
class CORDL_TYPE IControllerVibrator {
public:
// Declarations
 __declspec(property(get=get_vibrationMotorCount)) int32_t  vibrationMotorCount;

/// @brief Method GetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t GetVibration(int32_t  motorIndex) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method StopVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopVibration() ;

/// @brief Method get_vibrationMotorCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_vibrationMotorCount() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerVibrator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerVibrator(IControllerVibrator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2241};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
