#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiPlatformInputField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__KeyboardContent_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiPlatformInputField)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
struct MultiPlatformInputField__SelectNextFrame_d__16;
}
namespace GlobalNamespace {
struct MultiPlatformInputField__UseVirtualKeyboard_d__19;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Selectable;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiPlatformInputField;
}
namespace GlobalNamespace {
struct MultiPlatformInputField__SelectNextFrame_d__16;
}
namespace GlobalNamespace {
struct MultiPlatformInputField__UseVirtualKeyboard_d__19;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MultiPlatformInputField*);
MARK_VAL_T(::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16);
MARK_VAL_T(::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiPlatformInputField*, "", "MultiPlatformInputField");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16, "", "MultiPlatformInputField/<SelectNextFrame>d__16");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19, "", "MultiPlatformInputField/<UseVirtualKeyboard>d__19");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiPlatformInputField/<SelectNextFrame>d__16
struct CORDL_TYPE MultiPlatformInputField__SelectNextFrame_d__16 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038d800, size 0x350, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MultiPlatformInputField__SelectNextFrame_d__16() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MultiPlatformInputField>", modifiers: "", def_value: None }, CppParam { name: "onSubmit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr MultiPlatformInputField__SelectNextFrame_d__16(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::MultiPlatformInputField>  __4__this, bool  onSubmit, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5542};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MultiPlatformInputField>  __4__this;

/// @brief Field onSubmit, offset: 0x18, size: 0x1, def value: None
 bool  onSubmit;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16, onSubmit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiPlatformInputField/<UseVirtualKeyboard>d__19
struct CORDL_TYPE MultiPlatformInputField__UseVirtualKeyboard_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038ed30, size 0x4c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MultiPlatformInputField__UseVirtualKeyboard_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MultiPlatformInputField>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>", modifiers: "", def_value: None }]
constexpr MultiPlatformInputField__UseVirtualKeyboard_d__19(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::MultiPlatformInputField>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5543};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MultiPlatformInputField>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Shipmate.Porting.KeyboardContent, TMPro.TMP_InputField
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiPlatformInputField
class CORDL_TYPE MultiPlatformInputField : public ::TMPro::TMP_InputField {
public:
// Declarations
using _SelectNextFrame_d__16 = ::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16;

using _UseVirtualKeyboard_d__19 = ::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19;

/// @brief Field contentType, offset 0x2f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_contentType, put=__cordl_internal_set_contentType)) ::Shipmate::Porting::KeyboardContent  contentType;

/// @brief Field description_loc_key, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get_description_loc_key, put=__cordl_internal_set_description_loc_key)) ::StringW  description_loc_key;

/// @brief Field isPassword, offset 0x2fc, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPassword, put=__cordl_internal_set_isPassword)) bool  isPassword;

/// @brief Field maxLengthConsole, offset 0x304, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLengthConsole, put=__cordl_internal_set_maxLengthConsole)) int32_t  maxLengthConsole;

/// @brief Field maxLengthPC, offset 0x300, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLengthPC, put=__cordl_internal_set_maxLengthPC)) int32_t  maxLengthPC;

/// @brief Field reSelectOnSubmit, offset 0x318, size 0x1 
 __declspec(property(get=__cordl_internal_get_reSelectOnSubmit, put=__cordl_internal_set_reSelectOnSubmit)) bool  reSelectOnSubmit;

/// @brief Field restoreMulti, offset 0x328, size 0x1 
 __declspec(property(get=__cordl_internal_get_restoreMulti, put=__cordl_internal_set_restoreMulti)) bool  restoreMulti;

/// @brief Field title_loc_key, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get_title_loc_key, put=__cordl_internal_set_title_loc_key)) ::StringW  title_loc_key;

/// @brief Field toSelectOnSubmit, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get_toSelectOnSubmit, put=__cordl_internal_set_toSelectOnSubmit)) ::UnityW<::UnityEngine::UI::Selectable>  toSelectOnSubmit;

/// @brief Field trimEndingWhiteSpace, offset 0x2fd, size 0x1 
 __declspec(property(get=__cordl_internal_get_trimEndingWhiteSpace, put=__cordl_internal_set_trimEndingWhiteSpace)) bool  trimEndingWhiteSpace;

/// @brief Method Awake, addr 0x18037ead0, size 0x10, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MultiPlatformInputField* New_ctor() ;

/// @brief Method OnCancel, addr 0x18037eb60, size 0x10, virtual true, abstract: false, final false
inline void OnCancel(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnCancelConsole, addr 0x18037eae0, size 0x80, virtual false, abstract: false, final false
inline void OnCancelConsole(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnEnable, addr 0x18037eb70, size 0x10, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPointerClick, addr 0x18037eb80, size 0x10, virtual true, abstract: false, final false
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSubmit, addr 0x18037eca0, size 0x10, virtual true, abstract: false, final false
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnSubmitConsole, addr 0x18037eb90, size 0x110, virtual false, abstract: false, final false
inline void OnSubmitConsole(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OpenVirtualInputField, addr 0x18037ecb0, size 0x90, virtual false, abstract: false, final false
inline void OpenVirtualInputField() ;

/// @brief Method SelectNextFrame, addr 0x18037ed40, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid SelectNextFrame(bool  onSubmit) ;

/// @brief Method UseVirtualKeyboard, addr 0x18037edc0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask UseVirtualKeyboard() ;

constexpr ::Shipmate::Porting::KeyboardContent const& __cordl_internal_get_contentType() const;

constexpr ::Shipmate::Porting::KeyboardContent& __cordl_internal_get_contentType() ;

constexpr ::StringW const& __cordl_internal_get_description_loc_key() const;

constexpr ::StringW& __cordl_internal_get_description_loc_key() ;

constexpr bool const& __cordl_internal_get_isPassword() const;

constexpr bool& __cordl_internal_get_isPassword() ;

constexpr int32_t const& __cordl_internal_get_maxLengthConsole() const;

constexpr int32_t& __cordl_internal_get_maxLengthConsole() ;

constexpr int32_t const& __cordl_internal_get_maxLengthPC() const;

constexpr int32_t& __cordl_internal_get_maxLengthPC() ;

constexpr bool const& __cordl_internal_get_reSelectOnSubmit() const;

constexpr bool& __cordl_internal_get_reSelectOnSubmit() ;

constexpr bool const& __cordl_internal_get_restoreMulti() const;

constexpr bool& __cordl_internal_get_restoreMulti() ;

constexpr ::StringW const& __cordl_internal_get_title_loc_key() const;

constexpr ::StringW& __cordl_internal_get_title_loc_key() ;

constexpr ::UnityW<::UnityEngine::UI::Selectable> const& __cordl_internal_get_toSelectOnSubmit() const;

constexpr ::UnityW<::UnityEngine::UI::Selectable>& __cordl_internal_get_toSelectOnSubmit() ;

constexpr bool const& __cordl_internal_get_trimEndingWhiteSpace() const;

constexpr bool& __cordl_internal_get_trimEndingWhiteSpace() ;

constexpr void __cordl_internal_set_contentType(::Shipmate::Porting::KeyboardContent  value) ;

constexpr void __cordl_internal_set_description_loc_key(::StringW  value) ;

constexpr void __cordl_internal_set_isPassword(bool  value) ;

constexpr void __cordl_internal_set_maxLengthConsole(int32_t  value) ;

constexpr void __cordl_internal_set_maxLengthPC(int32_t  value) ;

constexpr void __cordl_internal_set_reSelectOnSubmit(bool  value) ;

constexpr void __cordl_internal_set_restoreMulti(bool  value) ;

constexpr void __cordl_internal_set_title_loc_key(::StringW  value) ;

constexpr void __cordl_internal_set_toSelectOnSubmit(::UnityW<::UnityEngine::UI::Selectable>  value) ;

constexpr void __cordl_internal_set_trimEndingWhiteSpace(bool  value) ;

/// @brief Method .ctor, addr 0x18037ee40, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiPlatformInputField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiPlatformInputField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiPlatformInputField(MultiPlatformInputField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiPlatformInputField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiPlatformInputField(MultiPlatformInputField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5544};

/// @brief Field contentType, offset: 0x2f8, size: 0x4, def value: None
 ::Shipmate::Porting::KeyboardContent  ___contentType;

/// @brief Field isPassword, offset: 0x2fc, size: 0x1, def value: None
 bool  ___isPassword;

/// @brief Field trimEndingWhiteSpace, offset: 0x2fd, size: 0x1, def value: None
 bool  ___trimEndingWhiteSpace;

/// @brief Field maxLengthPC, offset: 0x300, size: 0x4, def value: None
 int32_t  ___maxLengthPC;

/// @brief Field maxLengthConsole, offset: 0x304, size: 0x4, def value: None
 int32_t  ___maxLengthConsole;

/// @brief Field title_loc_key, offset: 0x308, size: 0x8, def value: None
 ::StringW  ___title_loc_key;

/// @brief Field description_loc_key, offset: 0x310, size: 0x8, def value: None
 ::StringW  ___description_loc_key;

/// @brief Field reSelectOnSubmit, offset: 0x318, size: 0x1, def value: None
 bool  ___reSelectOnSubmit;

/// @brief Field toSelectOnSubmit, offset: 0x320, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  ___toSelectOnSubmit;

/// @brief Field restoreMulti, offset: 0x328, size: 0x1, def value: None
 bool  ___restoreMulti;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___contentType) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___isPassword) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___trimEndingWhiteSpace) == 0x2fd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___maxLengthPC) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___maxLengthConsole) == 0x304, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___title_loc_key) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___description_loc_key) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___reSelectOnSubmit) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___toSelectOnSubmit) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiPlatformInputField, ___restoreMulti) == 0x328, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiPlatformInputField) == 0x330, "Size mismatch!");

} // namespace end def GlobalNamespace
