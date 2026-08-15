#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Channel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Channel)
namespace Cysharp::Threading::Tasks {
template<typename T>
class Channel_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class Channel;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Channel*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Channel*, "Cysharp.Threading.Tasks", "Channel");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Channel
class CORDL_TYPE Channel : public ::System::Object {
public:
// Declarations
/// @brief Method CreateSingleConsumerUnbounded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::Channel_1<T>* CreateSingleConsumerUnbounded() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Channel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Channel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Channel(Channel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Channel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Channel(Channel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Channel) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
