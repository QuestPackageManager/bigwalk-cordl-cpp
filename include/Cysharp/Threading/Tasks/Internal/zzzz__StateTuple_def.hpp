#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StateTuple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StateTuple)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T1>
class StateTuple_1;
}
namespace Cysharp::Threading::Tasks::Internal {
template<typename T1,typename T2>
class StateTuple_2;
}
namespace Cysharp::Threading::Tasks::Internal {
template<typename T1,typename T2,typename T3>
class StateTuple_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class StateTuple;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::StateTuple*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::StateTuple*, "Cysharp.Threading.Tasks.Internal", "StateTuple");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.StateTuple
class CORDL_TYPE StateTuple : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline ::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>* Create(T1  item1) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>* Create(T1  item1, T2  item2) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>* Create(T1  item1, T2  item2, T3  item3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateTuple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateTuple", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateTuple(StateTuple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateTuple", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateTuple(StateTuple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14724};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::StateTuple) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
