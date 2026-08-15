#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Characters/ThirdPerson/ThirdPersonUserControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ThirdPersonUserControl)
namespace Rowlan::UnityStandardAssets::Characters::ThirdPerson {
class ThirdPersonCharacter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::Characters::ThirdPerson {
class ThirdPersonUserControl;
}
// Write type traits
MARK_REF_T(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl*, "Rowlan.UnityStandardAssets.Characters.ThirdPerson", "ThirdPersonUserControl");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Rowlan::UnityStandardAssets::Characters::ThirdPerson {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl
class CORDL_TYPE ThirdPersonUserControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_Cam, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Cam, put=__cordl_internal_set_m_Cam)) ::UnityW<::UnityEngine::Transform>  m_Cam;

/// @brief Field m_CamForward, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CamForward, put=__cordl_internal_set_m_CamForward)) ::UnityEngine::Vector3  m_CamForward;

/// @brief Field m_Character, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Character, put=__cordl_internal_set_m_Character)) ::UnityW<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter>  m_Character;

/// @brief Field m_Jump, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Jump, put=__cordl_internal_set_m_Jump)) bool  m_Jump;

/// @brief Field m_Move, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Move, put=__cordl_internal_set_m_Move)) ::UnityEngine::Vector3  m_Move;

/// @brief Method FixedUpdate, addr 0x181ac1260, size 0x290, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl* New_ctor() ;

/// @brief Method Start, addr 0x181ac14f0, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181ac1580, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Cam() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Cam() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CamForward() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CamForward() ;

constexpr ::UnityW<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter> const& __cordl_internal_get_m_Character() const;

constexpr ::UnityW<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter>& __cordl_internal_get_m_Character() ;

constexpr bool const& __cordl_internal_get_m_Jump() const;

constexpr bool& __cordl_internal_get_m_Jump() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Move() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Move() ;

constexpr void __cordl_internal_set_m_Cam(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_CamForward(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Character(::UnityW<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter>  value) ;

constexpr void __cordl_internal_set_m_Jump(bool  value) ;

constexpr void __cordl_internal_set_m_Move(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThirdPersonUserControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThirdPersonUserControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThirdPersonUserControl(ThirdPersonUserControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThirdPersonUserControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThirdPersonUserControl(ThirdPersonUserControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20350};

/// @brief Field m_Character, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter>  ___m_Character;

/// @brief Field m_Cam, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Cam;

/// @brief Field m_CamForward, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CamForward;

/// @brief Field m_Move, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Move;

/// @brief Field m_Jump, offset: 0x48, size: 0x1, def value: None
 bool  ___m_Jump;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl, ___m_Character) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl, ___m_Cam) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl, ___m_CamForward) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl, ___m_Move) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl, ___m_Jump) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonUserControl) == 0x50, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::Characters::ThirdPerson
