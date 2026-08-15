#pragma once
// IWYU pragma private; include "Rewired/Initializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Initializer)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Rewired {
class Initializer;
}
// Write type traits
MARK_REF_T(::Rewired::Initializer*);
DEFINE_IL2CPP_CLASS(::Rewired::Initializer*, "Rewired", "Initializer");
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Initializer
class CORDL_TYPE Initializer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _destroySelf, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__destroySelf, put=__cordl_internal_set__destroySelf)) bool  _destroySelf;

/// @brief Field _inputManagerPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputManagerPrefab, put=__cordl_internal_set__inputManagerPrefab)) ::UnityW<::UnityEngine::GameObject>  _inputManagerPrefab;

 __declspec(property(get=get_destroySelf, put=set_destroySelf)) bool  destroySelf;

 __declspec(property(get=get_inputManagerPrefab, put=set_inputManagerPrefab)) ::UnityW<::UnityEngine::GameObject>  inputManagerPrefab;

/// @brief Method Awake, addr 0x18195ef40, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0x18195ef50, size 0x350, virtual false, abstract: false, final false
inline bool Initialize() ;

static inline ::Rewired::Initializer* New_ctor() ;

constexpr bool const& __cordl_internal_get__destroySelf() const;

constexpr bool& __cordl_internal_get__destroySelf() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__inputManagerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__inputManagerPrefab() ;

constexpr void __cordl_internal_set__destroySelf(bool  value) ;

constexpr void __cordl_internal_set__inputManagerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x18195f2a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_destroySelf, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_destroySelf() ;

/// @brief Method get_inputManagerPrefab, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_inputManagerPrefab() ;

/// @brief Method set_destroySelf, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_destroySelf(bool  value) ;

/// @brief Method set_inputManagerPrefab, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_inputManagerPrefab(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Initializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Initializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Initializer(Initializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Initializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Initializer(Initializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1968};

/// @brief Field _inputManagerPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____inputManagerPrefab;

/// @brief Field _destroySelf, offset: 0x28, size: 0x1, def value: None
 bool  ____destroySelf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Initializer, ____inputManagerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Initializer, ____destroySelf) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Initializer) == 0x30, "Size mismatch!");

} // namespace end def Rewired
