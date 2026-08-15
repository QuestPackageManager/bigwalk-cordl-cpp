#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ChannelWriter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ChannelWriter_1)
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class ChannelWriter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::ChannelWriter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::ChannelWriter_1, "Cysharp.Threading.Tasks", "ChannelWriter`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.ChannelWriter`1<T>
class CORDL_TYPE ChannelWriter_1 : public ::System::Object {
public:
// Declarations
/// @brief Method Complete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Complete(::System::Exception*  error) ;

static inline ::Cysharp::Threading::Tasks::ChannelWriter_1<T>* New_ctor() ;

/// @brief Method TryComplete, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryComplete(::System::Exception*  error) ;

/// @brief Method TryWrite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryWrite(T  item) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelWriter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelWriter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelWriter_1(ChannelWriter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelWriter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelWriter_1(ChannelWriter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
