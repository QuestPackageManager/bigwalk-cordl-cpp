#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationReportConfirmMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModerationReportConfirmMenu)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
struct ModerationReportConfirmMenu__DoReporting_d__8;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ModerationReportConfirmMenu;
}
namespace GlobalNamespace {
struct ModerationReportConfirmMenu__DoReporting_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModerationReportConfirmMenu*);
MARK_VAL_T(::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModerationReportConfirmMenu*, "", "ModerationReportConfirmMenu");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8, "", "ModerationReportConfirmMenu/<DoReporting>d__8");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModerationReportConfirmMenu/<DoReporting>d__8
struct CORDL_TYPE ModerationReportConfirmMenu__DoReporting_d__8 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1804416f0, size 0x640, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModerationReportConfirmMenu__DoReporting_d__8() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }]
constexpr ModerationReportConfirmMenu__DoReporting_d__8(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModerationReportConfirmMenu
class CORDL_TYPE ModerationReportConfirmMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoReporting_d__8 = ::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8;

/// @brief Field candidatePlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_candidatePlayer, put=__cordl_internal_set_candidatePlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  candidatePlayer;

/// @brief Field encounteredGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_encounteredGroup, put=__cordl_internal_set_encounteredGroup)) ::UnityW<::UnityEngine::Transform>  encounteredGroup;

/// @brief Field playerNameText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameText, put=__cordl_internal_set_playerNameText)) ::UnityW<::GlobalNamespace::LocalizedText>  playerNameText;

/// @brief Field unencounteredGroup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_unencounteredGroup, put=__cordl_internal_set_unencounteredGroup)) ::UnityW<::UnityEngine::Transform>  unencounteredGroup;

/// @brief Method ActionBack, addr 0x180437000, size 0x70, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method ActionReport, addr 0x1804389f0, size 0x80, virtual false, abstract: false, final false
inline void ActionReport() ;

/// @brief Method DoReporting, addr 0x180438a70, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid DoReporting() ;

/// @brief Method GoBack, addr 0x180437000, size 0x70, virtual false, abstract: false, final false
inline void GoBack() ;

static inline ::GlobalNamespace::ModerationReportConfirmMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x180438ae0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x180437370, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_candidatePlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_candidatePlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_encounteredGroup() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_encounteredGroup() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_playerNameText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_playerNameText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_unencounteredGroup() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_unencounteredGroup() ;

constexpr void __cordl_internal_set_candidatePlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_encounteredGroup(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_playerNameText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_unencounteredGroup(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModerationReportConfirmMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModerationReportConfirmMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModerationReportConfirmMenu(ModerationReportConfirmMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModerationReportConfirmMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModerationReportConfirmMenu(ModerationReportConfirmMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5267};

/// @brief Field candidatePlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___candidatePlayer;

/// @brief Field playerNameText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___playerNameText;

/// @brief Field encounteredGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___encounteredGroup;

/// @brief Field unencounteredGroup, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___unencounteredGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModerationReportConfirmMenu, ___candidatePlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationReportConfirmMenu, ___playerNameText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationReportConfirmMenu, ___encounteredGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationReportConfirmMenu, ___unencounteredGroup) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModerationReportConfirmMenu) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
