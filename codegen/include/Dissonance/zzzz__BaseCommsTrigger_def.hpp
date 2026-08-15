#pragma once
// IWYU pragma private; include "Dissonance/BaseCommsTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BaseCommsTrigger)
namespace Dissonance {
class DissonanceComms;
}
namespace Dissonance {
class IAccessTokenCollection;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class TokenSet;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Dissonance {
class BaseCommsTrigger;
}
// Write type traits
MARK_REF_T(::Dissonance::BaseCommsTrigger*);
DEFINE_IL2CPP_CLASS(::Dissonance::BaseCommsTrigger*, "Dissonance", "BaseCommsTrigger");
// Dependencies System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.BaseCommsTrigger
class CORDL_TYPE BaseCommsTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CanTrigger)) bool  CanTrigger;

 __declspec(property(get=get_Comms, put=set_Comms)) ::UnityW<::Dissonance::DissonanceComms>  Comms;

 __declspec(property(get=get_IsColliderTriggered)) bool  IsColliderTriggered;

/// @brief Field Log, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Log, put=__cordl_internal_set_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_TokenActivationState)) bool  TokenActivationState;

 __declspec(property(get=get_Tokens)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  Tokens;

 __declspec(property(get=get_UseColliderTrigger, put=set_UseColliderTrigger)) bool  UseColliderTrigger;

/// @brief Field _cachedTokenActivation, offset 0x40, size 0x2 
 __declspec(property(get=__cordl_internal_get__cachedTokenActivation, put=__cordl_internal_set__cachedTokenActivation)) ::System::Nullable_1<bool>  _cachedTokenActivation;

/// @brief Field _comms, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__comms, put=__cordl_internal_set__comms)) ::UnityW<::Dissonance::DissonanceComms>  _comms;

/// @brief Field _entitiesInCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__entitiesInCollider, put=__cordl_internal_set__entitiesInCollider)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _entitiesInCollider;

/// @brief Field _tokens, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__tokens, put=__cordl_internal_set__tokens)) ::Dissonance::TokenSet*  _tokens;

/// @brief Field _wasColliderTriggered, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasColliderTriggered, put=__cordl_internal_set__wasColliderTriggered)) bool  _wasColliderTriggered;

/// @brief Convert operator to "::Dissonance::IAccessTokenCollection"
constexpr operator  ::Dissonance::IAccessTokenCollection*() noexcept;

/// @brief Method AddToken, addr 0x1805c44a0, size 0x20, virtual true, abstract: false, final true
inline bool AddToken(::StringW  token) ;

/// @brief Method Awake, addr 0x1805c44c0, size 0x110, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckVoiceComm, addr 0x1805c45d0, size 0xe0, virtual false, abstract: false, final false
inline bool CheckVoiceComm() ;

/// @brief Method ColliderTriggerChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ColliderTriggerChanged() ;

/// @brief Method ColliderTriggerFilter, addr 0x1805c46b0, size 0x80, virtual true, abstract: false, final false
inline bool ColliderTriggerFilter(::UnityEngine::Collider*  other) ;

/// @brief Method ColliderTriggerFilter2D, addr 0x1805c46b0, size 0x80, virtual true, abstract: false, final false
inline bool ColliderTriggerFilter2D(::UnityEngine::Collider2D*  other) ;

/// @brief Method ContainsToken, addr 0x1805c4730, size 0x90, virtual true, abstract: false, final true
inline bool ContainsToken(::StringW  token) ;

/// @brief Method FindLocalVoiceComm, addr 0x1805c47c0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::Dissonance::DissonanceComms> FindLocalVoiceComm() ;

static inline ::Dissonance::BaseCommsTrigger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1805c4810, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1805c4820, size 0x70, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x1805c49b0, size 0x120, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerEnter2D, addr 0x1805c4890, size 0x120, virtual false, abstract: false, final false
inline void OnTriggerEnter2D(::UnityEngine::Collider2D*  other) ;

/// @brief Method OnTriggerExit, addr 0x1805c4ad0, size 0x70, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit2D, addr 0x1805c4ad0, size 0x70, virtual false, abstract: false, final false
inline void OnTriggerExit2D(::UnityEngine::Collider2D*  other) ;

/// @brief Method RemoveToken, addr 0x1805c4b40, size 0x20, virtual true, abstract: false, final true
inline bool RemoveToken(::StringW  token) ;

/// @brief Method Start, addr 0x1805c4820, size 0x70, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TokensModified, addr 0x1805c4b60, size 0x10, virtual true, abstract: false, final false
inline void TokensModified(::StringW  token) ;

/// @brief Method Update, addr 0x1805c4b70, size 0x170, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::Log* const& __cordl_internal_get_Log() const;

constexpr ::Dissonance::Log*& __cordl_internal_get_Log() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__cachedTokenActivation() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__cachedTokenActivation() ;

constexpr ::UnityW<::Dissonance::DissonanceComms> const& __cordl_internal_get__comms() const;

constexpr ::UnityW<::Dissonance::DissonanceComms>& __cordl_internal_get__comms() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__entitiesInCollider() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__entitiesInCollider() ;

constexpr ::Dissonance::TokenSet* const& __cordl_internal_get__tokens() const;

constexpr ::Dissonance::TokenSet*& __cordl_internal_get__tokens() ;

constexpr bool const& __cordl_internal_get__wasColliderTriggered() const;

constexpr bool& __cordl_internal_get__wasColliderTriggered() ;

constexpr void __cordl_internal_set_Log(::Dissonance::Log*  value) ;

constexpr void __cordl_internal_set__cachedTokenActivation(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__comms(::UnityW<::Dissonance::DissonanceComms>  value) ;

constexpr void __cordl_internal_set__entitiesInCollider(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__tokens(::Dissonance::TokenSet*  value) ;

constexpr void __cordl_internal_set__wasColliderTriggered(bool  value) ;

/// @brief Method .ctor, addr 0x1805c4ce0, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_CanTrigger() ;

/// @brief Method get_Comms, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Dissonance::DissonanceComms> get_Comms() ;

/// @brief Method get_IsColliderTriggered, addr 0x1805c4de0, size 0x50, virtual false, abstract: false, final false
inline bool get_IsColliderTriggered() ;

/// @brief Method get_TokenActivationState, addr 0x1805c4e30, size 0x90, virtual false, abstract: false, final false
inline bool get_TokenActivationState() ;

/// @brief Method get_Tokens, addr 0x1802d9800, size 0x10, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_Tokens() ;

/// @brief Method get_UseColliderTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_UseColliderTrigger() ;

/// @brief Convert to "::Dissonance::IAccessTokenCollection"
constexpr ::Dissonance::IAccessTokenCollection* i___Dissonance__IAccessTokenCollection() noexcept;

/// @brief Method set_Comms, addr 0x1805c4ec0, size 0x260, virtual false, abstract: false, final false
inline void set_Comms(::Dissonance::DissonanceComms*  value) ;

/// @brief Method set_UseColliderTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_UseColliderTrigger(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseCommsTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseCommsTrigger(BaseCommsTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseCommsTrigger(BaseCommsTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16777};

/// @brief Field Log, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Log*  ___Log;

/// @brief Field _wasColliderTriggered, offset: 0x28, size: 0x1, def value: None
 bool  ____wasColliderTriggered;

/// @brief Field _entitiesInCollider, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____entitiesInCollider;

/// @brief Field _tokens, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::TokenSet*  ____tokens;

/// @brief Field _cachedTokenActivation, offset: 0x40, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____cachedTokenActivation;

/// @brief Field _comms, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Dissonance::DissonanceComms>  ____comms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::BaseCommsTrigger, ___Log) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseCommsTrigger, ____wasColliderTriggered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseCommsTrigger, ____entitiesInCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseCommsTrigger, ____tokens) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseCommsTrigger, ____cachedTokenActivation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseCommsTrigger, ____comms) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Dissonance::BaseCommsTrigger) == 0x50, "Size mismatch!");

} // namespace end def Dissonance
