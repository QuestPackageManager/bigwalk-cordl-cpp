#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/PooledDelegate_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PooledDelegate_1)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class PooledDelegate_1___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class PooledDelegate_1;
}
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class PooledDelegate_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::PooledDelegate_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::PooledDelegate_1, "Cysharp.Threading.Tasks.Internal", "PooledDelegate`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c, "Cysharp.Threading.Tasks.Internal", "PooledDelegate`1/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.PooledDelegate`1/<>c<T>
class CORDL_TYPE PooledDelegate_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*  __9;

static inline ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PooledDelegate_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PooledDelegate_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PooledDelegate_1___c(PooledDelegate_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PooledDelegate_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PooledDelegate_1___c(PooledDelegate_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14720};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.PooledDelegate`1<T>
class CORDL_TYPE PooledDelegate_1 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*  NextNode;

/// @brief Field continuation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuation, put=__cordl_internal_set_continuation)) ::System::Action*  continuation;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>  pool;

/// @brief Field runDelegate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_runDelegate, put=__cordl_internal_set_runDelegate)) ::System::Action_1<T>*  runDelegate;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Action_1<T>* Create(::System::Action*  continuation) ;

static inline ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>* New_ctor() ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Run(T  _) ;

constexpr ::System::Action* const& __cordl_internal_get_continuation() const;

constexpr ::System::Action*& __cordl_internal_get_continuation() ;

constexpr ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*& __cordl_internal_get_nextNode() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_runDelegate() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_runDelegate() ;

constexpr void __cordl_internal_set_continuation(::System::Action*  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*  value) ;

constexpr void __cordl_internal_set_runDelegate(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__Internal__PooledDelegate_1_T___() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PooledDelegate_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PooledDelegate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PooledDelegate_1(PooledDelegate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PooledDelegate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PooledDelegate_1(PooledDelegate_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14721};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*  ___nextNode;

/// @brief Field runDelegate, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<T>*  ___runDelegate;

/// @brief Field continuation, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___continuation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
