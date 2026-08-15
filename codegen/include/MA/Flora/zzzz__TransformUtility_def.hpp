#pragma once
// IWYU pragma private; include "MA/Flora/TransformUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformUtility)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::Flora {
class TransformUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::TransformUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::TransformUtility*, "MA.Flora", "TransformUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TransformUtility
class CORDL_TYPE TransformUtility : public ::System::Object {
public:
// Declarations
/// @brief Method InverseTransformRotation, addr 0x1814c2750, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion InverseTransformRotation(::UnityEngine::Transform*  transform, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InverseTransformScale, addr 0x181513220, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 InverseTransformScale(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  scale) ;

/// @brief Method InverseTransformScale, addr 0x181513160, size 0xc0, virtual false, abstract: false, final false
static inline float_t InverseTransformScale(::UnityEngine::Transform*  transform, float_t  scale) ;

/// @brief Method TransformRotation, addr 0x1814c28f0, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion TransformRotation(::UnityEngine::Transform*  transform, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method TransformScale, addr 0x181513310, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformScale(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  scale) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformUtility(TransformUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformUtility(TransformUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TransformUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
