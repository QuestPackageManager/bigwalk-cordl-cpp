#pragma once
// IWYU pragma private; include "Boxophobic/Utility/CamController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CamController)
// Forward declare root types
namespace Boxophobic::Utility {
class CamController;
}
// Write type traits
MARK_REF_T(::Boxophobic::Utility::CamController*);
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::CamController*, "Boxophobic.Utility", "CamController");
// Dependencies UnityEngine.MonoBehaviour
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.CamController
class CORDL_TYPE CamController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field accelerationMultiplier, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_accelerationMultiplier, put=__cordl_internal_set_accelerationMultiplier)) float_t  accelerationMultiplier;

/// @brief Field movementSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementSpeed, put=__cordl_internal_set_movementSpeed)) float_t  movementSpeed;

/// @brief Field pitch, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field sensitivity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensitivity, put=__cordl_internal_set_sensitivity)) float_t  sensitivity;

/// @brief Field yaw, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_yaw, put=__cordl_internal_set_yaw)) float_t  yaw;

static inline ::Boxophobic::Utility::CamController* New_ctor() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x1804bc090, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1804bc100, size 0x1e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_accelerationMultiplier() const;

constexpr float_t& __cordl_internal_get_accelerationMultiplier() ;

constexpr float_t const& __cordl_internal_get_movementSpeed() const;

constexpr float_t& __cordl_internal_get_movementSpeed() ;

constexpr float_t const& __cordl_internal_get_pitch() const;

constexpr float_t& __cordl_internal_get_pitch() ;

constexpr float_t const& __cordl_internal_get_sensitivity() const;

constexpr float_t& __cordl_internal_get_sensitivity() ;

constexpr float_t const& __cordl_internal_get_yaw() const;

constexpr float_t& __cordl_internal_get_yaw() ;

constexpr void __cordl_internal_set_accelerationMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_movementSpeed(float_t  value) ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_sensitivity(float_t  value) ;

constexpr void __cordl_internal_set_yaw(float_t  value) ;

/// @brief Method .ctor, addr 0x1804bc2e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CamController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CamController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CamController(CamController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CamController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CamController(CamController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21190};

/// @brief Field movementSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___movementSpeed;

/// @brief Field accelerationMultiplier, offset: 0x24, size: 0x4, def value: None
 float_t  ___accelerationMultiplier;

/// @brief Field sensitivity, offset: 0x28, size: 0x4, def value: None
 float_t  ___sensitivity;

/// @brief Field yaw, offset: 0x2c, size: 0x4, def value: None
 float_t  ___yaw;

/// @brief Field pitch, offset: 0x30, size: 0x4, def value: None
 float_t  ___pitch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::Utility::CamController, ___movementSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::CamController, ___accelerationMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::CamController, ___sensitivity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::CamController, ___yaw) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::CamController, ___pitch) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::Utility::CamController) == 0x38, "Size mismatch!");

} // namespace end def Boxophobic::Utility
