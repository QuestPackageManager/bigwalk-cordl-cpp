#pragma once
// IWYU pragma private; include "System/Tuple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tuple)
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
// Forward declare root types
namespace System {
class Tuple;
}
// Write type traits
MARK_REF_T(::System::Tuple*);
DEFINE_IL2CPP_CLASS(::System::Tuple*, "System", "Tuple");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Tuple
class CORDL_TYPE Tuple : public ::System::Object {
public:
// Declarations
/// @brief Method CombineHashCodes, addr 0x180baefc0, size 0x10, virtual false, abstract: false, final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2) ;

/// @brief Method CombineHashCodes, addr 0x180baefd0, size 0x1610, virtual false, abstract: false, final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3) ;

/// @brief Method CombineHashCodes, addr 0x1817285e0, size 0x20, virtual false, abstract: false, final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3, int32_t  h4) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::System::Tuple_2<T1,T2>* Create(T1  item1, T2  item2) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::System::Tuple_3<T1,T2,T3>* Create(T1  item1, T2  item2, T3  item3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tuple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tuple", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple(Tuple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple(Tuple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Tuple) == 0x10, "Size mismatch!");

} // namespace end def System
