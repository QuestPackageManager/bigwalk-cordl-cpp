#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimatorJobExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnimatorJobExtensions)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Animations {
struct PropertyStreamHandle;
}
namespace UnityEngine::Animations {
struct TransformSceneHandle;
}
namespace UnityEngine::Animations {
struct TransformStreamHandle;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimatorJobExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::AnimatorJobExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimatorJobExtensions*, "UnityEngine.Animations", "AnimatorJobExtensions");
// Dependencies System.Object
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.AnimatorJobExtensions
class CORDL_TYPE AnimatorJobExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method BindSceneTransform, addr 0x182233990, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::TransformSceneHandle BindSceneTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform) ;

/// @brief Method BindStreamProperty, addr 0x182233aa0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::PropertyStreamHandle BindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property) ;

/// @brief Method BindStreamProperty, addr 0x182233a40, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::PropertyStreamHandle BindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property, bool  isObjectReference) ;

/// @brief Method BindStreamTransform, addr 0x182233af0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::TransformStreamHandle BindStreamTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform) ;

/// @brief Method InternalBindSceneTransform, addr 0x182233bb0, size 0xa0, virtual false, abstract: false, final false
static inline void InternalBindSceneTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>  transformSceneHandle) ;

/// @brief Method InternalBindSceneTransform_Injected, addr 0x182233ba0, size 0x10, virtual false, abstract: false, final false
static inline void InternalBindSceneTransform_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>  transformSceneHandle) ;

/// @brief Method InternalBindStreamProperty, addr 0x182233c60, size 0x1e0, virtual false, abstract: false, final false
static inline void InternalBindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle) ;

/// @brief Method InternalBindStreamProperty_Injected, addr 0x182233c50, size 0x10, virtual false, abstract: false, final false
static inline void InternalBindStreamProperty_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::System::Type*  type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle) ;

/// @brief Method InternalBindStreamTransform, addr 0x182233e50, size 0xa0, virtual false, abstract: false, final false
static inline void InternalBindStreamTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>  transformStreamHandle) ;

/// @brief Method InternalBindStreamTransform_Injected, addr 0x182233e40, size 0x10, virtual false, abstract: false, final false
static inline void InternalBindStreamTransform_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>  transformStreamHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorJobExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorJobExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorJobExtensions(AnimatorJobExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorJobExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorJobExtensions(AnimatorJobExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19948};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::AnimatorJobExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
