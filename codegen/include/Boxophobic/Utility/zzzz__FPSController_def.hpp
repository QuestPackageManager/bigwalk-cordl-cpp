#pragma once
// IWYU pragma private; include "Boxophobic/Utility/FPSController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FPSController)
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Boxophobic::Utility {
class FPSController;
}
// Write type traits
MARK_REF_T(::Boxophobic::Utility::FPSController*);
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::FPSController*, "Boxophobic.Utility", "FPSController");
// Dependencies UnityEngine.MonoBehaviour
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.FPSController
class CORDL_TYPE FPSController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field characterController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_characterController, put=__cordl_internal_set_characterController)) ::UnityW<::UnityEngine::CharacterController>  characterController;

/// @brief Field lookSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookSpeed, put=__cordl_internal_set_lookSpeed)) float_t  lookSpeed;

/// @brief Field lookXLimit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookXLimit, put=__cordl_internal_set_lookXLimit)) float_t  lookXLimit;

/// @brief Field playerCamera, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCamera, put=__cordl_internal_set_playerCamera)) ::UnityW<::UnityEngine::GameObject>  playerCamera;

/// @brief Field rotationX, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationX, put=__cordl_internal_set_rotationX)) float_t  rotationX;

/// @brief Field walkingSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_walkingSpeed, put=__cordl_internal_set_walkingSpeed)) float_t  walkingSpeed;

static inline ::Boxophobic::Utility::FPSController* New_ctor() ;

/// @brief Method Start, addr 0x1804bc300, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1804bc340, size 0x4b0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_characterController() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_characterController() ;

constexpr float_t const& __cordl_internal_get_lookSpeed() const;

constexpr float_t& __cordl_internal_get_lookSpeed() ;

constexpr float_t const& __cordl_internal_get_lookXLimit() const;

constexpr float_t& __cordl_internal_get_lookXLimit() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerCamera() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerCamera() ;

constexpr float_t const& __cordl_internal_get_rotationX() const;

constexpr float_t& __cordl_internal_get_rotationX() ;

constexpr float_t const& __cordl_internal_get_walkingSpeed() const;

constexpr float_t& __cordl_internal_get_walkingSpeed() ;

constexpr void __cordl_internal_set_characterController(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_lookSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lookXLimit(float_t  value) ;

constexpr void __cordl_internal_set_playerCamera(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rotationX(float_t  value) ;

constexpr void __cordl_internal_set_walkingSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x1804bc7f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FPSController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FPSController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FPSController(FPSController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FPSController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FPSController(FPSController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21191};

/// @brief Field walkingSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___walkingSpeed;

/// @brief Field lookSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___lookSpeed;

/// @brief Field lookXLimit, offset: 0x28, size: 0x4, def value: None
 float_t  ___lookXLimit;

/// @brief Field playerCamera, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerCamera;

/// @brief Field characterController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___characterController;

/// @brief Field rotationX, offset: 0x40, size: 0x4, def value: None
 float_t  ___rotationX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::Utility::FPSController, ___walkingSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::FPSController, ___lookSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::FPSController, ___lookXLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::FPSController, ___playerCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::FPSController, ___characterController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::FPSController, ___rotationX) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::Utility::FPSController) == 0x48, "Size mismatch!");

} // namespace end def Boxophobic::Utility
