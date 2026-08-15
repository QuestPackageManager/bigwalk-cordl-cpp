#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FreeCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FreeCamera)
// Forward declare root types
namespace UnityEngine::Rendering {
class FreeCamera;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::FreeCamera*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::FreeCamera*, "UnityEngine.Rendering", "FreeCamera");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.FreeCamera
class CORDL_TYPE FreeCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field fire1, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get_fire1, put=__cordl_internal_set_fire1)) bool  fire1;

/// @brief Field inputChangeSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputChangeSpeed, put=__cordl_internal_set_inputChangeSpeed)) float_t  inputChangeSpeed;

/// @brief Field inputHorizontal, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputHorizontal, put=__cordl_internal_set_inputHorizontal)) float_t  inputHorizontal;

/// @brief Field inputRotateAxisX, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputRotateAxisX, put=__cordl_internal_set_inputRotateAxisX)) float_t  inputRotateAxisX;

/// @brief Field inputRotateAxisY, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputRotateAxisY, put=__cordl_internal_set_inputRotateAxisY)) float_t  inputRotateAxisY;

/// @brief Field inputVertical, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputVertical, put=__cordl_internal_set_inputVertical)) float_t  inputVertical;

/// @brief Field inputYAxis, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputYAxis, put=__cordl_internal_set_inputYAxis)) float_t  inputYAxis;

/// @brief Field kHorizontal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kHorizontal, put=setStaticF_kHorizontal)) ::StringW  kHorizontal;

/// @brief Field kMouseX, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kMouseX, put=setStaticF_kMouseX)) ::StringW  kMouseX;

/// @brief Field kMouseY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kMouseY, put=setStaticF_kMouseY)) ::StringW  kMouseY;

/// @brief Field kRightStickX, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kRightStickX, put=setStaticF_kRightStickX)) ::StringW  kRightStickX;

/// @brief Field kRightStickY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kRightStickY, put=setStaticF_kRightStickY)) ::StringW  kRightStickY;

/// @brief Field kSpeedAxis, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kSpeedAxis, put=setStaticF_kSpeedAxis)) ::StringW  kSpeedAxis;

/// @brief Field kVertical, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kVertical, put=setStaticF_kVertical)) ::StringW  kVertical;

/// @brief Field kYAxis, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kYAxis, put=setStaticF_kYAxis)) ::StringW  kYAxis;

/// @brief Field leftShift, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftShift, put=__cordl_internal_set_leftShift)) bool  leftShift;

/// @brief Field leftShiftBoost, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftShiftBoost, put=__cordl_internal_set_leftShiftBoost)) bool  leftShiftBoost;

/// @brief Field m_LookSpeedController, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LookSpeedController, put=__cordl_internal_set_m_LookSpeedController)) float_t  m_LookSpeedController;

/// @brief Field m_LookSpeedMouse, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LookSpeedMouse, put=__cordl_internal_set_m_LookSpeedMouse)) float_t  m_LookSpeedMouse;

/// @brief Field m_MoveSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveSpeed, put=__cordl_internal_set_m_MoveSpeed)) float_t  m_MoveSpeed;

/// @brief Field m_MoveSpeedIncrement, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveSpeedIncrement, put=__cordl_internal_set_m_MoveSpeedIncrement)) float_t  m_MoveSpeedIncrement;

/// @brief Field m_Turbo, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Turbo, put=__cordl_internal_set_m_Turbo)) float_t  m_Turbo;

static inline ::UnityEngine::Rendering::FreeCamera* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterInputs, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void RegisterInputs() ;

/// @brief Method Update, addr 0x181fd8ea0, size 0x4f0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateInputs, addr 0x181fd8d10, size 0x190, virtual false, abstract: false, final false
inline void UpdateInputs() ;

constexpr bool const& __cordl_internal_get_fire1() const;

constexpr bool& __cordl_internal_get_fire1() ;

constexpr float_t const& __cordl_internal_get_inputChangeSpeed() const;

constexpr float_t& __cordl_internal_get_inputChangeSpeed() ;

constexpr float_t const& __cordl_internal_get_inputHorizontal() const;

constexpr float_t& __cordl_internal_get_inputHorizontal() ;

constexpr float_t const& __cordl_internal_get_inputRotateAxisX() const;

constexpr float_t& __cordl_internal_get_inputRotateAxisX() ;

constexpr float_t const& __cordl_internal_get_inputRotateAxisY() const;

constexpr float_t& __cordl_internal_get_inputRotateAxisY() ;

constexpr float_t const& __cordl_internal_get_inputVertical() const;

constexpr float_t& __cordl_internal_get_inputVertical() ;

constexpr float_t const& __cordl_internal_get_inputYAxis() const;

constexpr float_t& __cordl_internal_get_inputYAxis() ;

constexpr bool const& __cordl_internal_get_leftShift() const;

constexpr bool& __cordl_internal_get_leftShift() ;

constexpr bool const& __cordl_internal_get_leftShiftBoost() const;

constexpr bool& __cordl_internal_get_leftShiftBoost() ;

constexpr float_t const& __cordl_internal_get_m_LookSpeedController() const;

constexpr float_t& __cordl_internal_get_m_LookSpeedController() ;

constexpr float_t const& __cordl_internal_get_m_LookSpeedMouse() const;

constexpr float_t& __cordl_internal_get_m_LookSpeedMouse() ;

constexpr float_t const& __cordl_internal_get_m_MoveSpeed() const;

constexpr float_t& __cordl_internal_get_m_MoveSpeed() ;

constexpr float_t const& __cordl_internal_get_m_MoveSpeedIncrement() const;

constexpr float_t& __cordl_internal_get_m_MoveSpeedIncrement() ;

constexpr float_t const& __cordl_internal_get_m_Turbo() const;

constexpr float_t& __cordl_internal_get_m_Turbo() ;

constexpr void __cordl_internal_set_fire1(bool  value) ;

constexpr void __cordl_internal_set_inputChangeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_inputHorizontal(float_t  value) ;

constexpr void __cordl_internal_set_inputRotateAxisX(float_t  value) ;

constexpr void __cordl_internal_set_inputRotateAxisY(float_t  value) ;

constexpr void __cordl_internal_set_inputVertical(float_t  value) ;

constexpr void __cordl_internal_set_inputYAxis(float_t  value) ;

constexpr void __cordl_internal_set_leftShift(bool  value) ;

constexpr void __cordl_internal_set_leftShiftBoost(bool  value) ;

constexpr void __cordl_internal_set_m_LookSpeedController(float_t  value) ;

constexpr void __cordl_internal_set_m_LookSpeedMouse(float_t  value) ;

constexpr void __cordl_internal_set_m_MoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_MoveSpeedIncrement(float_t  value) ;

constexpr void __cordl_internal_set_m_Turbo(float_t  value) ;

/// @brief Method .ctor, addr 0x181fd9550, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_kHorizontal() ;

static inline ::StringW getStaticF_kMouseX() ;

static inline ::StringW getStaticF_kMouseY() ;

static inline ::StringW getStaticF_kRightStickX() ;

static inline ::StringW getStaticF_kRightStickY() ;

static inline ::StringW getStaticF_kSpeedAxis() ;

static inline ::StringW getStaticF_kVertical() ;

static inline ::StringW getStaticF_kYAxis() ;

static inline void setStaticF_kHorizontal(::StringW  value) ;

static inline void setStaticF_kMouseX(::StringW  value) ;

static inline void setStaticF_kMouseY(::StringW  value) ;

static inline void setStaticF_kRightStickX(::StringW  value) ;

static inline void setStaticF_kRightStickY(::StringW  value) ;

static inline void setStaticF_kSpeedAxis(::StringW  value) ;

static inline void setStaticF_kVertical(::StringW  value) ;

static inline void setStaticF_kYAxis(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeCamera(FreeCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeCamera(FreeCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6673};

/// @brief Field k_MouseSensitivityMultiplier offset 0xffffffff size 0x4
static constexpr float_t  k_MouseSensitivityMultiplier{static_cast<float_t>(0.01f)};

/// @brief Field m_LookSpeedController, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_LookSpeedController;

/// @brief Field m_LookSpeedMouse, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_LookSpeedMouse;

/// @brief Field m_MoveSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_MoveSpeed;

/// @brief Field m_MoveSpeedIncrement, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_MoveSpeedIncrement;

/// @brief Field m_Turbo, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_Turbo;

/// @brief Field inputRotateAxisX, offset: 0x34, size: 0x4, def value: None
 float_t  ___inputRotateAxisX;

/// @brief Field inputRotateAxisY, offset: 0x38, size: 0x4, def value: None
 float_t  ___inputRotateAxisY;

/// @brief Field inputChangeSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ___inputChangeSpeed;

/// @brief Field inputVertical, offset: 0x40, size: 0x4, def value: None
 float_t  ___inputVertical;

/// @brief Field inputHorizontal, offset: 0x44, size: 0x4, def value: None
 float_t  ___inputHorizontal;

/// @brief Field inputYAxis, offset: 0x48, size: 0x4, def value: None
 float_t  ___inputYAxis;

/// @brief Field leftShiftBoost, offset: 0x4c, size: 0x1, def value: None
 bool  ___leftShiftBoost;

/// @brief Field leftShift, offset: 0x4d, size: 0x1, def value: None
 bool  ___leftShift;

/// @brief Field fire1, offset: 0x4e, size: 0x1, def value: None
 bool  ___fire1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_LookSpeedController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_LookSpeedMouse) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_MoveSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_MoveSpeedIncrement) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_Turbo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputRotateAxisX) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputRotateAxisY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputChangeSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputVertical) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputHorizontal) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputYAxis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___leftShiftBoost) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___leftShift) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___fire1) == 0x4e, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::FreeCamera) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
