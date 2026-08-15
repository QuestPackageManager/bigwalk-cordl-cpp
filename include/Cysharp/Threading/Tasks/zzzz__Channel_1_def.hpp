#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Channel_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__Channel_2_def.hpp"
CORDL_MODULE_EXPORT(Channel_1)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class Channel_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Channel_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Channel_1, "Cysharp.Threading.Tasks", "Channel`1");
// Dependencies Cysharp.Threading.Tasks.Channel`2<TWrite, TRead>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Channel`1<T>
class CORDL_TYPE Channel_1 : public ::Cysharp::Threading::Tasks::Channel_2<T,T> {
public:
// Declarations
static inline ::Cysharp::Threading::Tasks::Channel_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Channel_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Channel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Channel_1(Channel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Channel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Channel_1(Channel_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14185};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
