#pragma once
// IWYU pragma private; include "Animancer/ObjectPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ObjectPool)
namespace Animancer {
class Disposable_ObjectPool___c;
}
namespace Animancer {
template<typename T>
class Disposable_ObjectPool___c__1_1;
}
namespace Animancer {
template<typename T>
class Disposable_ObjectPool___c__2_1;
}
namespace Animancer {
template<typename T>
struct ObjectPool_1_Disposable;
}
namespace Animancer {
class ObjectPool_Disposable;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GUIContent;
}
// Forward declare root types
namespace Animancer {
class Disposable_ObjectPool___c;
}
namespace Animancer {
template<typename T>
class Disposable_ObjectPool___c__1_1;
}
namespace Animancer {
template<typename T>
class Disposable_ObjectPool___c__2_1;
}
namespace Animancer {
class ObjectPool;
}
namespace Animancer {
class ObjectPool_Disposable;
}
// Write type traits
MARK_REF_T(::Animancer::Disposable_ObjectPool___c*);
MARK_GEN_REF_T_PTR(::Animancer::Disposable_ObjectPool___c__1_1);
MARK_GEN_REF_T_PTR(::Animancer::Disposable_ObjectPool___c__2_1);
MARK_REF_T(::Animancer::ObjectPool*);
MARK_REF_T(::Animancer::ObjectPool_Disposable*);
DEFINE_IL2CPP_CLASS(::Animancer::Disposable_ObjectPool___c*, "Animancer", "ObjectPool/Disposable/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::Disposable_ObjectPool___c__1_1, "Animancer", "ObjectPool/Disposable/<>c__1`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::Disposable_ObjectPool___c__2_1, "Animancer", "ObjectPool/Disposable/<>c__2`1");
DEFINE_IL2CPP_CLASS(::Animancer::ObjectPool*, "Animancer", "ObjectPool");
DEFINE_IL2CPP_CLASS(::Animancer::ObjectPool_Disposable*, "Animancer", "ObjectPool/Disposable");
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ObjectPool/Disposable/<>c
class CORDL_TYPE Disposable_ObjectPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Animancer::Disposable_ObjectPool___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Action_1<::UnityEngine::GUIContent*>*  __9__3_0;

static inline ::Animancer::Disposable_ObjectPool___c* New_ctor() ;

/// @brief Method <AcquireContent>b__3_0, addr 0x1802f5c80, size 0x40, virtual false, abstract: false, final false
inline void _AcquireContent_b__3_0(::UnityEngine::GUIContent*  c) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Animancer::Disposable_ObjectPool___c* getStaticF___9() ;

static inline ::System::Action_1<::UnityEngine::GUIContent*>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Animancer::Disposable_ObjectPool___c*  value) ;

static inline void setStaticF___9__3_0(::System::Action_1<::UnityEngine::GUIContent*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Disposable_ObjectPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Disposable_ObjectPool___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Disposable_ObjectPool___c(Disposable_ObjectPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Disposable_ObjectPool___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Disposable_ObjectPool___c(Disposable_ObjectPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18081};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Disposable_ObjectPool___c) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.ObjectPool/Disposable/<>c__1`1<T>
class CORDL_TYPE Disposable_ObjectPool___c__1_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Animancer::Disposable_ObjectPool___c__1_1<T>*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Action_1<::System::Collections::Generic::List_1<T>*>*  __9__1_0;

static inline ::Animancer::Disposable_ObjectPool___c__1_1<T>* New_ctor() ;

/// @brief Method <AcquireList>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _AcquireList_b__1_0(::System::Collections::Generic::List_1<T>*  l) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Animancer::Disposable_ObjectPool___c__1_1<T>* getStaticF___9() ;

static inline ::System::Action_1<::System::Collections::Generic::List_1<T>*>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::Animancer::Disposable_ObjectPool___c__1_1<T>*  value) ;

static inline void setStaticF___9__1_0(::System::Action_1<::System::Collections::Generic::List_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Disposable_ObjectPool___c__1_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Disposable_ObjectPool___c__1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Disposable_ObjectPool___c__1_1(Disposable_ObjectPool___c__1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Disposable_ObjectPool___c__1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Disposable_ObjectPool___c__1_1(Disposable_ObjectPool___c__1_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18082};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.ObjectPool/Disposable/<>c__2`1<T>
class CORDL_TYPE Disposable_ObjectPool___c__2_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Animancer::Disposable_ObjectPool___c__2_1<T>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Collections::Generic::HashSet_1<T>*>*  __9__2_0;

static inline ::Animancer::Disposable_ObjectPool___c__2_1<T>* New_ctor() ;

/// @brief Method <AcquireSet>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _AcquireSet_b__2_0(::System::Collections::Generic::HashSet_1<T>*  s) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Animancer::Disposable_ObjectPool___c__2_1<T>* getStaticF___9() ;

static inline ::System::Action_1<::System::Collections::Generic::HashSet_1<T>*>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Animancer::Disposable_ObjectPool___c__2_1<T>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Collections::Generic::HashSet_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Disposable_ObjectPool___c__2_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Disposable_ObjectPool___c__2_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Disposable_ObjectPool___c__2_1(Disposable_ObjectPool___c__2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Disposable_ObjectPool___c__2_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Disposable_ObjectPool___c__2_1(Disposable_ObjectPool___c__2_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18083};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ObjectPool/Disposable
class CORDL_TYPE ObjectPool_Disposable : public ::System::Object {
public:
// Declarations
using __c = ::Animancer::Disposable_ObjectPool___c;

template<typename T>
using __c__1_1 = ::Animancer::Disposable_ObjectPool___c__1_1<T>;

template<typename T>
using __c__2_1 = ::Animancer::Disposable_ObjectPool___c__2_1<T>;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Animancer::ObjectPool_1_Disposable<T> Acquire(::by_ref<T>  item) ;

/// @brief Method AcquireContent, addr 0x1802ecc30, size 0x120, virtual false, abstract: false, final false
static inline ::Animancer::ObjectPool_1_Disposable<::UnityEngine::GUIContent*> AcquireContent(::by_ref<::UnityEngine::GUIContent*>  content, ::StringW  text, ::StringW  tooltip, bool  narrowText) ;

/// @brief Method AcquireList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Animancer::ObjectPool_1_Disposable<::System::Collections::Generic::List_1<T>*> AcquireList(::by_ref<::System::Collections::Generic::List_1<T>*>  list) ;

/// @brief Method AcquireSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Animancer::ObjectPool_1_Disposable<::System::Collections::Generic::HashSet_1<T>*> AcquireSet(::by_ref<::System::Collections::Generic::HashSet_1<T>*>  set) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_Disposable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_Disposable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_Disposable(ObjectPool_Disposable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_Disposable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_Disposable(ObjectPool_Disposable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18084};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ObjectPool_Disposable) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ObjectPool
class CORDL_TYPE ObjectPool : public ::System::Object {
public:
// Declarations
using Disposable = ::Animancer::ObjectPool_Disposable;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Acquire() ;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Acquire(::by_ref<T>  item) ;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Acquire(::by_ref<::System::Collections::Generic::List_1<T>*>  list) ;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Acquire(::by_ref<::System::Collections::Generic::HashSet_1<T>*>  set) ;

/// @brief Method AcquireList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* AcquireList() ;

/// @brief Method AcquireSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::HashSet_1<T>* AcquireSet() ;

/// @brief Method AcquireStringBuilder, addr 0x1802f1660, size 0x30, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* AcquireStringBuilder() ;

/// @brief Method Release, addr 0x1802f1700, size 0x50, virtual false, abstract: false, final false
static inline void Release(::System::Text::StringBuilder*  builder) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Release(::by_ref<T>  item) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Release(T  item) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Release(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Release(::by_ref<::System::Collections::Generic::List_1<T>*>  list) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Release(::System::Collections::Generic::HashSet_1<T>*  set) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Release(::by_ref<::System::Collections::Generic::HashSet_1<T>*>  set) ;

/// @brief Method ReleaseToString, addr 0x1802f1690, size 0x70, virtual false, abstract: false, final false
static inline ::StringW ReleaseToString(::System::Text::StringBuilder*  builder) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool(ObjectPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool(ObjectPool const& ) = delete;

/// @brief Field NotClearError offset 0xffffffff size 0x8
static constexpr ::ConstString  NotClearError{u" They must be cleared before being released to the pool and not modified after that."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18085};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ObjectPool) == 0x10, "Size mismatch!");

} // namespace end def Animancer
