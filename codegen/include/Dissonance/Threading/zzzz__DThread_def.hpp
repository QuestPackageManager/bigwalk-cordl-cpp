#pragma once
// IWYU pragma private; include "Dissonance/Threading/DThread.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DThread)
namespace Dissonance::Threading {
class IThread;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Dissonance::Threading {
class DThread;
}
// Write type traits
MARK_REF_T(::Dissonance::Threading::DThread*);
DEFINE_IL2CPP_CLASS(::Dissonance::Threading::DThread*, "Dissonance.Threading", "DThread");
// Dependencies System.Object
namespace Dissonance::Threading {
// Is value type: false
// CS Name: Dissonance.Threading.DThread
class CORDL_TYPE DThread : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsStarted, put=set_IsStarted)) bool  IsStarted;

/// @brief Field <IsStarted>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStarted_k__BackingField, put=__cordl_internal_set__IsStarted_k__BackingField)) bool  _IsStarted_k__BackingField;

/// @brief Field _thread, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__thread, put=__cordl_internal_set__thread)) ::System::Threading::Thread*  _thread;

/// @brief Convert operator to "::Dissonance::Threading::IThread"
constexpr operator  ::Dissonance::Threading::IThread*() noexcept;

/// @brief Method Join, addr 0x1805db2a0, size 0x40, virtual true, abstract: false, final true
inline void Join() ;

static inline ::Dissonance::Threading::DThread* New_ctor(::System::Action*  action) ;

/// @brief Method Start, addr 0x1805db2e0, size 0x30, virtual true, abstract: false, final true
inline void Start() ;

constexpr bool const& __cordl_internal_get__IsStarted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStarted_k__BackingField() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get__thread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get__thread() ;

constexpr void __cordl_internal_set__IsStarted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__thread(::System::Threading::Thread*  value) ;

/// @brief Method .ctor, addr 0x1805db310, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Action*  action) ;

/// @brief Method get_IsStarted, addr 0x18037a0f0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsStarted() ;

/// @brief Convert to "::Dissonance::Threading::IThread"
constexpr ::Dissonance::Threading::IThread* i___Dissonance__Threading__IThread() noexcept;

/// @brief Method set_IsStarted, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_IsStarted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DThread() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DThread", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DThread(DThread && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DThread", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DThread(DThread const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16858};

/// @brief Field _thread, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Thread*  ____thread;

/// @brief Field <IsStarted>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsStarted_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Threading::DThread, ____thread) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Threading::DThread, ____IsStarted_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Threading::DThread) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Threading
