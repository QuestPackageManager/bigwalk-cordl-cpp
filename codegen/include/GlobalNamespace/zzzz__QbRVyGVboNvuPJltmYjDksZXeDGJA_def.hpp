#pragma once
// IWYU pragma private; include "GlobalNamespace/QbRVyGVboNvuPJltmYjDksZXeDGJA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QbRVyGVboNvuPJltmYjDksZXeDGJA)
namespace GlobalNamespace {
template<typename ,typename >
struct HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl;
}
namespace GlobalNamespace {
template<typename T,typename TArgs>
class QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2;
}
namespace GlobalNamespace {
template<typename THandler,typename TValue>
class QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename ,typename >
struct HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl;
}
namespace GlobalNamespace {
class QbRVyGVboNvuPJltmYjDksZXeDGJA;
}
namespace GlobalNamespace {
template<typename T,typename TArgs>
class QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2;
}
namespace GlobalNamespace {
template<typename THandler,typename TValue>
class QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl);
MARK_REF_T(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2);
MARK_GEN_REF_T_PTR(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl, "", "QbRVyGVboNvuPJltmYjDksZXeDGJA/HierarchyEventHelper`2/ApQKYZBpsptdJbHrrjNdhRQcRHZl");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA*, "", "QbRVyGVboNvuPJltmYjDksZXeDGJA");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2, "", "QbRVyGVboNvuPJltmYjDksZXeDGJA/EventFunction`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2, "", "QbRVyGVboNvuPJltmYjDksZXeDGJA/HierarchyEventHelper`2");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename T,typename TArgs>
// Is value type: false
// CS Name: QbRVyGVboNvuPJltmYjDksZXeDGJA/EventFunction`2<T,TArgs>
class CORDL_TYPE QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  handler, TArgs  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T  handler, TArgs  value) ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<T,TArgs>* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2(QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2(QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2894};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename ,typename >
// Is value type: true
// CS Name: QbRVyGVboNvuPJltmYjDksZXeDGJA/HierarchyEventHelper`2/ApQKYZBpsptdJbHrrjNdhRQcRHZl<,>
struct CORDL_TYPE HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl_Unwrapped
enum struct __HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Self = static_cast<int32_t>(0x1),
__E_Children = static_cast<int32_t>(0x4),
__E_Parents = static_cast<int32_t>(0x8),
__E_All = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl_Unwrapped () const noexcept {
return static_cast<__HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl(int32_t  value__) noexcept;

/// @brief Field All value: I32(-1)
static ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<,> const All;

/// @brief Field Children value: I32(4)
static ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<,> const Children;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<,> const None;

/// @brief Field Parents value: I32(8)
static ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<,> const Parents;

/// @brief Field Self value: I32(1)
static ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<,> const Self;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2895};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies QbRVyGVboNvuPJltmYjDksZXeDGJA::HierarchyEventHelper`2::ApQKYZBpsptdJbHrrjNdhRQcRHZl<, >, System.Object
namespace GlobalNamespace {
// cpp template
template<typename THandler,typename TValue>
// Is value type: false
// CS Name: QbRVyGVboNvuPJltmYjDksZXeDGJA/HierarchyEventHelper`2<THandler,TValue>
class CORDL_TYPE QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2 : public ::System::Object {
public:
// Declarations
using ApQKYZBpsptdJbHrrjNdhRQcRHZl = ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<THandler, TValue>;

/// @brief Field jjHLFMrLAWCPzcEZSojPYoJMVnQs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_jjHLFMrLAWCPzcEZSojPYoJMVnQs, put=__cordl_internal_set_jjHLFMrLAWCPzcEZSojPYoJMVnQs)) ::System::Collections::Generic::List_1<THandler>*  jjHLFMrLAWCPzcEZSojPYoJMVnQs;

/// @brief Field oidwdbWGkvkXrfozBvdgqnIvDfkG, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_oidwdbWGkvkXrfozBvdgqnIvDfkG, put=__cordl_internal_set_oidwdbWGkvkXrfozBvdgqnIvDfkG)) ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<THandler,TValue>  oidwdbWGkvkXrfozBvdgqnIvDfkG;

/// @brief Field uAGgOniigsrpvsGYhMJmHroSjfTAA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_uAGgOniigsrpvsGYhMJmHroSjfTAA, put=__cordl_internal_set_uAGgOniigsrpvsGYhMJmHroSjfTAA)) ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>*  uAGgOniigsrpvsGYhMJmHroSjfTAA;

/// @brief Method ExecuteOnAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ExecuteOnAll(TValue  value) ;

/// @brief Method GetHandlers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetHandlers(::UnityEngine::Transform*  transform) ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<THandler,TValue>* New_ctor(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<THandler,TValue>* New_ctor(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>*  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<THandler,TValue>  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::System::Collections::Generic::List_1<THandler>* const& __cordl_internal_get_jjHLFMrLAWCPzcEZSojPYoJMVnQs() const;

constexpr ::System::Collections::Generic::List_1<THandler>*& __cordl_internal_get_jjHLFMrLAWCPzcEZSojPYoJMVnQs() ;

constexpr ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<THandler,TValue> const& __cordl_internal_get_oidwdbWGkvkXrfozBvdgqnIvDfkG() const;

constexpr ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<THandler,TValue>& __cordl_internal_get_oidwdbWGkvkXrfozBvdgqnIvDfkG() ;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>* const& __cordl_internal_get_uAGgOniigsrpvsGYhMJmHroSjfTAA() const;

constexpr ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>*& __cordl_internal_get_uAGgOniigsrpvsGYhMJmHroSjfTAA() ;

constexpr void __cordl_internal_set_jjHLFMrLAWCPzcEZSojPYoJMVnQs(::System::Collections::Generic::List_1<THandler>*  value) ;

constexpr void __cordl_internal_set_oidwdbWGkvkXrfozBvdgqnIvDfkG(::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<THandler,TValue>  value) ;

constexpr void __cordl_internal_set_uAGgOniigsrpvsGYhMJmHroSjfTAA(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>*  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<THandler,TValue>  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2(QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2(QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2896};

/// @brief Field uAGgOniigsrpvsGYhMJmHroSjfTAA, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<THandler,TValue>*  ___uAGgOniigsrpvsGYhMJmHroSjfTAA;

/// @brief Field jjHLFMrLAWCPzcEZSojPYoJMVnQs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<THandler>*  ___jjHLFMrLAWCPzcEZSojPYoJMVnQs;

/// @brief Field oidwdbWGkvkXrfozBvdgqnIvDfkG, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::HierarchyEventHelper_2_QbRVyGVboNvuPJltmYjDksZXeDGJA_ApQKYZBpsptdJbHrrjNdhRQcRHZl<THandler,TValue>  ___oidwdbWGkvkXrfozBvdgqnIvDfkG;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QbRVyGVboNvuPJltmYjDksZXeDGJA
class CORDL_TYPE QbRVyGVboNvuPJltmYjDksZXeDGJA : public ::System::Object {
public:
// Declarations
template<typename T,typename TArgs>
using EventFunction_2 = ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<T, TArgs>;

template<typename THandler,typename TValue>
using HierarchyEventHelper_2 = ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_HierarchyEventHelper_2<THandler, TValue>;

/// @brief Method NDAUUnMYZRjHqtQrxSgFFiGfDrHK, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ,typename >
static inline void NDAUUnMYZRjHqtQrxSgFFiGfDrHK(::System::Collections::Generic::IList_1<>*  _cordl_fixed_empty_name_whitespace,   _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<,>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method nBkmsroXwYdtqnvKjPjZZPWCINho, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ,typename >
static inline void nBkmsroXwYdtqnvKjPjZZPWCINho(::System::Collections::Generic::IList_1<>*  _cordl_fixed_empty_name_whitespace,   _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<,>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method xZtCAPghgbQnKdjebqEKWuEEYSk, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ,typename >
static inline void xZtCAPghgbQnKdjebqEKWuEEYSk(  _cordl_fixed_empty_name_whitespace,   _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA_EventFunction_2<,>*  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QbRVyGVboNvuPJltmYjDksZXeDGJA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QbRVyGVboNvuPJltmYjDksZXeDGJA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QbRVyGVboNvuPJltmYjDksZXeDGJA(QbRVyGVboNvuPJltmYjDksZXeDGJA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QbRVyGVboNvuPJltmYjDksZXeDGJA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QbRVyGVboNvuPJltmYjDksZXeDGJA(QbRVyGVboNvuPJltmYjDksZXeDGJA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2897};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QbRVyGVboNvuPJltmYjDksZXeDGJA) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
