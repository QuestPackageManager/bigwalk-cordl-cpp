#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TextSelectionEventConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextSelectionEventConverter)
namespace System {
class IDisposable;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityEvent_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class TextSelectionEventConverter;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::TextSelectionEventConverter*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::TextSelectionEventConverter*, "Cysharp.Threading.Tasks", "TextSelectionEventConverter");
// Dependencies System.ValueTuple`3<T1, T2, T3>, UnityEngine.Events.UnityEvent`1<T0>
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.TextSelectionEventConverter
class CORDL_TYPE TextSelectionEventConverter : public ::UnityEngine::Events::UnityEvent_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> {
public:
// Declarations
/// @brief Field innerEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerEvent, put=__cordl_internal_set_innerEvent)) ::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*  innerEvent;

/// @brief Field invokeDelegate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_invokeDelegate, put=__cordl_internal_set_invokeDelegate)) ::UnityEngine::Events::UnityAction_3<::StringW,int32_t,int32_t>*  invokeDelegate;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x181e80440, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method InvokeCore, addr 0x181e80470, size 0x50, virtual false, abstract: false, final false
inline void InvokeCore(::StringW  item1, int32_t  item2, int32_t  item3) ;

static inline ::Cysharp::Threading::Tasks::TextSelectionEventConverter* New_ctor(::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*  unityEvent) ;

constexpr ::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>* const& __cordl_internal_get_innerEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*& __cordl_internal_get_innerEvent() ;

constexpr ::UnityEngine::Events::UnityAction_3<::StringW,int32_t,int32_t>* const& __cordl_internal_get_invokeDelegate() const;

constexpr ::UnityEngine::Events::UnityAction_3<::StringW,int32_t,int32_t>*& __cordl_internal_get_invokeDelegate() ;

constexpr void __cordl_internal_set_innerEvent(::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_invokeDelegate(::UnityEngine::Events::UnityAction_3<::StringW,int32_t,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x181e804c0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*  unityEvent) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextSelectionEventConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextSelectionEventConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextSelectionEventConverter(TextSelectionEventConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextSelectionEventConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextSelectionEventConverter(TextSelectionEventConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14534};

/// @brief Field innerEvent, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>*  ___innerEvent;

/// @brief Field invokeDelegate, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_3<::StringW,int32_t,int32_t>*  ___invokeDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::TextSelectionEventConverter, ___innerEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TextSelectionEventConverter, ___invokeDelegate) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::TextSelectionEventConverter) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
