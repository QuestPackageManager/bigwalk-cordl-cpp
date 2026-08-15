#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TextMeshProAsyncExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextMeshProAsyncExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncDeselectEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncEndEditEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncEndTextSelectionEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncSelectEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncSubmitEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncTextSelectionEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncValueChangedEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
struct TextMeshProAsyncExtensions__BindToCore_d__44;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct TextMeshProAsyncExtensions__BindToCore_d__48_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class TextMeshProAsyncExtensions;
}
namespace Cysharp::Threading::Tasks {
struct TextMeshProAsyncExtensions__BindToCore_d__44;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct TextMeshProAsyncExtensions__BindToCore_d__48_1;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*);
MARK_VAL_T(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*, "Cysharp.Threading.Tasks", "TextMeshProAsyncExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, "Cysharp.Threading.Tasks", "TextMeshProAsyncExtensions/<BindToCore>d__44");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1, "Cysharp.Threading.Tasks", "TextMeshProAsyncExtensions/<BindToCore>d__48`1");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44
struct CORDL_TYPE TextMeshProAsyncExtensions__BindToCore_d__44 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181e71c20, size 0xa20, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TextMeshProAsyncExtensions__BindToCore_d__44() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: None }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr TextMeshProAsyncExtensions__BindToCore_d__44(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::TMPro::TMP_Text>  text, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field rebindOnError, offset: 0x20, size: 0x1, def value: None
 bool  rebindOnError;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Field <repeat>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _repeat_5__2;

/// @brief Field <e>5__3, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*  _e_5__3;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, cancellationToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, rebindOnError) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, _repeat_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, _e_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44) == 0x70, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__48`1<T>
struct CORDL_TYPE TextMeshProAsyncExtensions__BindToCore_d__48_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TextMeshProAsyncExtensions__BindToCore_d__48_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: None }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr TextMeshProAsyncExtensions__BindToCore_d__48_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::TMPro::TMP_Text>  text, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21494};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field rebindOnError, offset: 0x20, size: 0x1, def value: None
 bool  rebindOnError;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Field <repeat>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _repeat_5__2;

/// @brief Field <e>5__3, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  _e_5__3;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.TextMeshProAsyncExtensions
class CORDL_TYPE TextMeshProAsyncExtensions : public ::System::Object {
public:
// Declarations
using _BindToCore_d__44 = ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44;

template<typename T>
using _BindToCore_d__48_1 = ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>;

/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x181e706b0, size 0x10, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x181e706c0, size 0x50, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError) ;

/// @brief Method BindToCore, addr 0x181e705f0, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindToCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method GetAsyncDeselectEventHandler, addr 0x181e70780, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* GetAsyncDeselectEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method GetAsyncDeselectEventHandler, addr 0x181e70710, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* GetAsyncDeselectEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncEndEditEventHandler, addr 0x181e70870, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* GetAsyncEndEditEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method GetAsyncEndEditEventHandler, addr 0x181e70800, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* GetAsyncEndEditEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncEndTextSelectionEventHandler, addr 0x181e708f0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* GetAsyncEndTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method GetAsyncEndTextSelectionEventHandler, addr 0x181e70980, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* GetAsyncEndTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncSelectEventHandler, addr 0x181e70a10, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* GetAsyncSelectEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method GetAsyncSelectEventHandler, addr 0x181e70a90, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* GetAsyncSelectEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncSubmitEventHandler, addr 0x181e70b70, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* GetAsyncSubmitEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method GetAsyncSubmitEventHandler, addr 0x181e70b00, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* GetAsyncSubmitEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncTextSelectionEventHandler, addr 0x181e70c80, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* GetAsyncTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method GetAsyncTextSelectionEventHandler, addr 0x181e70bf0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* GetAsyncTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e70d10, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* GetAsyncValueChangedEventHandler(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e70d90, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* GetAsyncValueChangedEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnDeselectAsAsyncEnumerable, addr 0x181e70e60, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnDeselectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnDeselectAsAsyncEnumerable, addr 0x181e70e00, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnDeselectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnDeselectAsync, addr 0x181e70ed0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnDeselectAsync(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnDeselectAsync, addr 0x181e70f60, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnDeselectAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnEndEditAsAsyncEnumerable, addr 0x181e70fe0, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnEndEditAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnEndEditAsAsyncEnumerable, addr 0x181e71050, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnEndEditAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnEndEditAsync, addr 0x181e71130, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnEndEditAsync(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnEndEditAsync, addr 0x181e710b0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnEndEditAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnEndTextSelectionAsAsyncEnumerable, addr 0x181e71240, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* OnEndTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnEndTextSelectionAsAsyncEnumerable, addr 0x181e711c0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* OnEndTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnEndTextSelectionAsync, addr 0x181e71370, size 0xb0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> OnEndTextSelectionAsync(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnEndTextSelectionAsync, addr 0x181e712d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> OnEndTextSelectionAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnSelectAsAsyncEnumerable, addr 0x181e71480, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnSelectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnSelectAsAsyncEnumerable, addr 0x181e71420, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnSelectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnSelectAsync, addr 0x181e714f0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnSelectAsync(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnSelectAsync, addr 0x181e71580, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnSelectAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnSubmitAsAsyncEnumerable, addr 0x181e71660, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnSubmitAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnSubmitAsAsyncEnumerable, addr 0x181e71600, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnSubmitAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnSubmitAsync, addr 0x181e716d0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnSubmitAsync(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnSubmitAsync, addr 0x181e71760, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnSubmitAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnTextSelectionAsAsyncEnumerable, addr 0x181e71860, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* OnTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnTextSelectionAsAsyncEnumerable, addr 0x181e717e0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* OnTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnTextSelectionAsync, addr 0x181e718f0, size 0xb0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> OnTextSelectionAsync(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnTextSelectionAsync, addr 0x181e719a0, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> OnTextSelectionAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e71a40, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnValueChangedAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e71ab0, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnValueChangedAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsync, addr 0x181e71b90, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnValueChangedAsync(::TMPro::TMP_InputField*  inputField) ;

/// @brief Method OnValueChangedAsync, addr 0x181e71b10, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnValueChangedAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextMeshProAsyncExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProAsyncExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMeshProAsyncExtensions(TextMeshProAsyncExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProAsyncExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMeshProAsyncExtensions(TextMeshProAsyncExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21495};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
