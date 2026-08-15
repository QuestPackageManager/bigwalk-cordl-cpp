#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateAxis6D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateAxis6D)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateElement;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateAxis6D;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateAxis6D*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateAxis6D*, "Rewired", "IControllerTemplateAxis6D");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateAxis6D
class CORDL_TYPE IControllerTemplateAxis6D {
public:
// Declarations
 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_positionPrev)) ::UnityEngine::Vector3  positionPrev;

 __declspec(property(get=get_positionX)) ::Rewired::IControllerTemplateAxis*  positionX;

 __declspec(property(get=get_positionY)) ::Rewired::IControllerTemplateAxis*  positionY;

 __declspec(property(get=get_positionZ)) ::Rewired::IControllerTemplateAxis*  positionZ;

 __declspec(property(get=get_rotation)) ::UnityEngine::Vector3  rotation;

 __declspec(property(get=get_rotationPrev)) ::UnityEngine::Vector3  rotationPrev;

 __declspec(property(get=get_rotationX)) ::Rewired::IControllerTemplateAxis*  rotationX;

 __declspec(property(get=get_rotationY)) ::Rewired::IControllerTemplateAxis*  rotationY;

 __declspec(property(get=get_rotationZ)) ::Rewired::IControllerTemplateAxis*  rotationZ;

/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr operator  ::Rewired::IControllerTemplateElement*() noexcept;

/// @brief Method get_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_positionPrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_positionPrev() ;

/// @brief Method get_positionX, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_positionX() ;

/// @brief Method get_positionY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_positionY() ;

/// @brief Method get_positionZ, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_positionZ() ;

/// @brief Method get_rotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_rotation() ;

/// @brief Method get_rotationPrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_rotationPrev() ;

/// @brief Method get_rotationX, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rotationX() ;

/// @brief Method get_rotationY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rotationY() ;

/// @brief Method get_rotationZ, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rotationZ() ;

/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* i___Rewired__IControllerTemplateElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateAxis6D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateAxis6D(IControllerTemplateAxis6D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1895};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
