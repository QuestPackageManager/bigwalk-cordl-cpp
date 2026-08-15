#pragma once
// IWYU pragma private; include "UnityEngine/Avatar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Avatar)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class Avatar;
}
// Write type traits
MARK_REF_T(::UnityEngine::Avatar*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Avatar*, "UnityEngine", "Avatar");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Avatar
class CORDL_TYPE Avatar : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_isHuman)) bool  isHuman;

 __declspec(property(get=get_isValid)) bool  isValid;

/// @brief Method get_isHuman, addr 0x182236ef0, size 0x30, virtual false, abstract: false, final false
inline bool get_isHuman() ;

/// @brief Method get_isHuman_Injected, addr 0x182236ee0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isHuman_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isValid, addr 0x182236f30, size 0x30, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_isValid_Injected, addr 0x182236f20, size 0x10, virtual false, abstract: false, final false
static inline bool get_isValid_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Avatar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Avatar(Avatar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Avatar(Avatar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19917};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Avatar) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
