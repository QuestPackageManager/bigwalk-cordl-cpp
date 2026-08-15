#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncStartTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncStartTrigger)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncStartTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncStartTrigger");
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncStartTrigger
class CORDL_TYPE AsyncStartTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Field called, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_called, put=__cordl_internal_set_called)) bool  called;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger* New_ctor() ;

/// @brief Method Start, addr 0x181e7a120, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartAsync, addr 0x181e7a010, size 0x110, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask StartAsync() ;

constexpr bool const& __cordl_internal_get_called() const;

constexpr bool& __cordl_internal_get_called() ;

constexpr void __cordl_internal_set_called(bool  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncStartTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncStartTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncStartTrigger(AsyncStartTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncStartTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncStartTrigger(AsyncStartTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14555};

/// @brief Field called, offset: 0x3a, size: 0x1, def value: None
 bool  ___called;

/// @brief Size padding 0x48 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger, ___called) == 0x3a, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
