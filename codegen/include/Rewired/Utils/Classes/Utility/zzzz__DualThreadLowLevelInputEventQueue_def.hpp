#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/DualThreadLowLevelInputEventQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/Utility/zzzz__LockedObject_1_def.hpp"
#include "Rewired/zzzz__LowLevelInputEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DualThreadLowLevelInputEventQueue)
namespace Rewired::Utils::Classes::Utility {
class DualThreadLowLevelInputEventQueue_INewEventWrapper;
}
namespace Rewired::Utils::Classes::Utility {
class DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb;
}
namespace Rewired::Utils::Classes::Utility {
class LowLevelInputEventQueue;
}
namespace Rewired {
struct LowLevelInputEvent;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class DualThreadLowLevelInputEventQueue;
}
namespace Rewired::Utils::Classes::Utility {
class DualThreadLowLevelInputEventQueue_INewEventWrapper;
}
namespace Rewired::Utils::Classes::Utility {
class DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*);
MARK_REF_T(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*);
MARK_REF_T(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*, "Rewired.Utils.Classes.Utility", "DualThreadLowLevelInputEventQueue");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*, "Rewired.Utils.Classes.Utility", "DualThreadLowLevelInputEventQueue/INewEventWrapper");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*, "Rewired.Utils.Classes.Utility", "DualThreadLowLevelInputEventQueue/XZUDOkLYMiyAcCBkkyDdRYohglkb");
// Dependencies Rewired.LowLevelInputEvent, Rewired.Utils.Classes.Utility.LockedObject`1<T>
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.DualThreadLowLevelInputEventQueue/XZUDOkLYMiyAcCBkkyDdRYohglkb
class CORDL_TYPE DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb : public ::Rewired::Utils::Classes::Utility::LockedObject_1<::Rewired::LowLevelInputEvent> {
public:
// Declarations
 __declspec(property(get=get_Event, put=set_Event)) ::Rewired::LowLevelInputEvent  Event;

/// @brief Convert operator to "::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper"
constexpr operator  ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

static inline ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181943c80, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Event, addr 0x180432220, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::LowLevelInputEvent get_Event() ;

/// @brief Convert to "::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper"
constexpr ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper* i___Rewired__Utils__Classes__Utility__DualThreadLowLevelInputEventQueue_INewEventWrapper() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Event, addr 0x180effe50, size 0xf7a0, virtual true, abstract: false, final true
inline void set_Event(::Rewired::LowLevelInputEvent  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb(DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb(DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
// Dependencies 
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.DualThreadLowLevelInputEventQueue/INewEventWrapper
class CORDL_TYPE DualThreadLowLevelInputEventQueue_INewEventWrapper {
public:
// Declarations
 __declspec(property(get=get_Event, put=set_Event)) ::Rewired::LowLevelInputEvent  Event;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_Event, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::LowLevelInputEvent get_Event() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Event, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Event(::Rewired::LowLevelInputEvent  value) ;

// Ctor Parameters [CppParam { name: "", ty: "DualThreadLowLevelInputEventQueue_INewEventWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualThreadLowLevelInputEventQueue_INewEventWrapper(DualThreadLowLevelInputEventQueue_INewEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility
// Dependencies Rewired.LowLevelInputEvent, System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.DualThreadLowLevelInputEventQueue
class CORDL_TYPE DualThreadLowLevelInputEventQueue : public ::System::Object {
public:
// Declarations
using INewEventWrapper = ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper;

using XZUDOkLYMiyAcCBkkyDdRYohglkb = ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb;

/// @brief Field CEFvZViCQkSxTuJYZhbobwEAFezE, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CEFvZViCQkSxTuJYZhbobwEAFezE, put=__cordl_internal_set_CEFvZViCQkSxTuJYZhbobwEAFezE)) ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  CEFvZViCQkSxTuJYZhbobwEAFezE;

/// @brief Field MadTVgFDETFUvJyXWsZNSPQtENgo, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_MadTVgFDETFUvJyXWsZNSPQtENgo, put=__cordl_internal_set_MadTVgFDETFUvJyXWsZNSPQtENgo)) bool  MadTVgFDETFUvJyXWsZNSPQtENgo;

/// @brief Field PBjbogNaKXdmFfcCftYbpgMcGJsDb, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_PBjbogNaKXdmFfcCftYbpgMcGJsDb, put=__cordl_internal_set_PBjbogNaKXdmFfcCftYbpgMcGJsDb)) int32_t  PBjbogNaKXdmFfcCftYbpgMcGJsDb;

/// @brief Field PWKAjQKJMOZpEmLdVcgbKIqqXTst, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PWKAjQKJMOZpEmLdVcgbKIqqXTst, put=__cordl_internal_set_PWKAjQKJMOZpEmLdVcgbKIqqXTst)) ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*  PWKAjQKJMOZpEmLdVcgbKIqqXTst;

/// @brief Field TvcACEhgrlJRuEXgyfpAkxUdQgbf, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_TvcACEhgrlJRuEXgyfpAkxUdQgbf, put=__cordl_internal_set_TvcACEhgrlJRuEXgyfpAkxUdQgbf)) int32_t  TvcACEhgrlJRuEXgyfpAkxUdQgbf;

/// @brief Field YXIdFfgOlCJjCrCxxpGxPtuNhKSib, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_YXIdFfgOlCJjCrCxxpGxPtuNhKSib, put=__cordl_internal_set_YXIdFfgOlCJjCrCxxpGxPtuNhKSib)) uint32_t  YXIdFfgOlCJjCrCxxpGxPtuNhKSib;

/// @brief Field bPSooZNAhETwHGzaKhNHHZHnkBHp, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_bPSooZNAhETwHGzaKhNHHZHnkBHp, put=__cordl_internal_set_bPSooZNAhETwHGzaKhNHHZHnkBHp)) bool  bPSooZNAhETwHGzaKhNHHZHnkBHp;

 __declspec(property(get=get_capacity)) int32_t  capacity;

 __declspec(property(get=get_capacityBytes)) int32_t  capacityBytes;

 __declspec(property(get=get_count)) int32_t  count;

/// @brief Field currentEvent, offset 0x40, size 0x20 
 __declspec(property(get=__cordl_internal_get_currentEvent, put=__cordl_internal_set_currentEvent)) ::Rewired::LowLevelInputEvent  currentEvent;

 __declspec(property(get=get_lastProcessedEventId)) uint32_t  lastProcessedEventId;

/// @brief Field sqTpUwmCxhfYpGwHzEHmWcCNFDePA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sqTpUwmCxhfYpGwHzEHmWcCNFDePA, put=__cordl_internal_set_sqTpUwmCxhfYpGwHzEHmWcCNFDePA)) ::System::Object*  sqTpUwmCxhfYpGwHzEHmWcCNFDePA;

/// @brief Field wrpBysDverOSKHnYZMHbsjKMEJzXA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrpBysDverOSKHnYZMHbsjKMEJzXA, put=__cordl_internal_set_wrpBysDverOSKHnYZMHbsjKMEJzXA)) ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  wrpBysDverOSKHnYZMHbsjKMEJzXA;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0x18192b700, size 0xe0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x18192b7e0, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x18192b810, size 0x120, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x18192b930, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method ImportAll, addr 0x18192b950, size 0x210, virtual false, abstract: false, final false
inline void ImportAll(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*  other) ;

static inline ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method ProcessNewEvents, addr 0x18192bb60, size 0x170, virtual false, abstract: false, final false
inline bool ProcessNewEvents() ;

/// @brief Method StopProcessingEvents, addr 0x18192bcd0, size 0x10, virtual false, abstract: false, final false
inline void StopProcessingEvents() ;

/// @brief Method T_CreateEvent, addr 0x18192bce0, size 0xf0, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper* T_CreateEvent() ;

/// @brief Method Update, addr 0x18192bdd0, size 0xa0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* const& __cordl_internal_get_CEFvZViCQkSxTuJYZhbobwEAFezE() const;

constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*& __cordl_internal_get_CEFvZViCQkSxTuJYZhbobwEAFezE() ;

constexpr bool const& __cordl_internal_get_MadTVgFDETFUvJyXWsZNSPQtENgo() const;

constexpr bool& __cordl_internal_get_MadTVgFDETFUvJyXWsZNSPQtENgo() ;

constexpr int32_t const& __cordl_internal_get_PBjbogNaKXdmFfcCftYbpgMcGJsDb() const;

constexpr int32_t& __cordl_internal_get_PBjbogNaKXdmFfcCftYbpgMcGJsDb() ;

constexpr ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb* const& __cordl_internal_get_PWKAjQKJMOZpEmLdVcgbKIqqXTst() const;

constexpr ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*& __cordl_internal_get_PWKAjQKJMOZpEmLdVcgbKIqqXTst() ;

constexpr int32_t const& __cordl_internal_get_TvcACEhgrlJRuEXgyfpAkxUdQgbf() const;

constexpr int32_t& __cordl_internal_get_TvcACEhgrlJRuEXgyfpAkxUdQgbf() ;

constexpr uint32_t const& __cordl_internal_get_YXIdFfgOlCJjCrCxxpGxPtuNhKSib() const;

constexpr uint32_t& __cordl_internal_get_YXIdFfgOlCJjCrCxxpGxPtuNhKSib() ;

constexpr bool const& __cordl_internal_get_bPSooZNAhETwHGzaKhNHHZHnkBHp() const;

constexpr bool& __cordl_internal_get_bPSooZNAhETwHGzaKhNHHZHnkBHp() ;

constexpr ::Rewired::LowLevelInputEvent const& __cordl_internal_get_currentEvent() const;

constexpr ::Rewired::LowLevelInputEvent& __cordl_internal_get_currentEvent() ;

constexpr ::System::Object* const& __cordl_internal_get_sqTpUwmCxhfYpGwHzEHmWcCNFDePA() const;

constexpr ::System::Object*& __cordl_internal_get_sqTpUwmCxhfYpGwHzEHmWcCNFDePA() ;

constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* const& __cordl_internal_get_wrpBysDverOSKHnYZMHbsjKMEJzXA() const;

constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*& __cordl_internal_get_wrpBysDverOSKHnYZMHbsjKMEJzXA() ;

constexpr void __cordl_internal_set_CEFvZViCQkSxTuJYZhbobwEAFezE(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  value) ;

constexpr void __cordl_internal_set_MadTVgFDETFUvJyXWsZNSPQtENgo(bool  value) ;

constexpr void __cordl_internal_set_PBjbogNaKXdmFfcCftYbpgMcGJsDb(int32_t  value) ;

constexpr void __cordl_internal_set_PWKAjQKJMOZpEmLdVcgbKIqqXTst(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*  value) ;

constexpr void __cordl_internal_set_TvcACEhgrlJRuEXgyfpAkxUdQgbf(int32_t  value) ;

constexpr void __cordl_internal_set_YXIdFfgOlCJjCrCxxpGxPtuNhKSib(uint32_t  value) ;

constexpr void __cordl_internal_set_bPSooZNAhETwHGzaKhNHHZHnkBHp(bool  value) ;

constexpr void __cordl_internal_set_currentEvent(::Rewired::LowLevelInputEvent  value) ;

constexpr void __cordl_internal_set_sqTpUwmCxhfYpGwHzEHmWcCNFDePA(::System::Object*  value) ;

constexpr void __cordl_internal_set_wrpBysDverOSKHnYZMHbsjKMEJzXA(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  value) ;

/// @brief Method .ctor, addr 0x18192be70, size 0x110, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_capacity, addr 0x18192c020, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_capacity() ;

/// @brief Method get_capacityBytes, addr 0x18192bf80, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_capacityBytes() ;

/// @brief Method get_count, addr 0x18192c0c0, size 0xb0, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Method get_lastProcessedEventId, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_lastProcessedEventId() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualThreadLowLevelInputEventQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualThreadLowLevelInputEventQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualThreadLowLevelInputEventQueue(DualThreadLowLevelInputEventQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualThreadLowLevelInputEventQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualThreadLowLevelInputEventQueue(DualThreadLowLevelInputEventQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2982};

/// @brief Field wrpBysDverOSKHnYZMHbsjKMEJzXA, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  ___wrpBysDverOSKHnYZMHbsjKMEJzXA;

/// @brief Field CEFvZViCQkSxTuJYZhbobwEAFezE, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  ___CEFvZViCQkSxTuJYZhbobwEAFezE;

/// @brief Field sqTpUwmCxhfYpGwHzEHmWcCNFDePA, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___sqTpUwmCxhfYpGwHzEHmWcCNFDePA;

/// @brief Field YXIdFfgOlCJjCrCxxpGxPtuNhKSib, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___YXIdFfgOlCJjCrCxxpGxPtuNhKSib;

/// @brief Field MadTVgFDETFUvJyXWsZNSPQtENgo, offset: 0x2c, size: 0x1, def value: None
 bool  ___MadTVgFDETFUvJyXWsZNSPQtENgo;

/// @brief Field TvcACEhgrlJRuEXgyfpAkxUdQgbf, offset: 0x30, size: 0x4, def value: None
 int32_t  ___TvcACEhgrlJRuEXgyfpAkxUdQgbf;

/// @brief Field PBjbogNaKXdmFfcCftYbpgMcGJsDb, offset: 0x34, size: 0x4, def value: None
 int32_t  ___PBjbogNaKXdmFfcCftYbpgMcGJsDb;

/// @brief Field PWKAjQKJMOZpEmLdVcgbKIqqXTst, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*  ___PWKAjQKJMOZpEmLdVcgbKIqqXTst;

/// @brief Field currentEvent, offset: 0x40, size: 0x20, def value: None
 ::Rewired::LowLevelInputEvent  ___currentEvent;

/// @brief Field bPSooZNAhETwHGzaKhNHHZHnkBHp, offset: 0x60, size: 0x1, def value: None
 bool  ___bPSooZNAhETwHGzaKhNHHZHnkBHp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___wrpBysDverOSKHnYZMHbsjKMEJzXA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___CEFvZViCQkSxTuJYZhbobwEAFezE) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___sqTpUwmCxhfYpGwHzEHmWcCNFDePA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___YXIdFfgOlCJjCrCxxpGxPtuNhKSib) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___MadTVgFDETFUvJyXWsZNSPQtENgo) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___TvcACEhgrlJRuEXgyfpAkxUdQgbf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___PBjbogNaKXdmFfcCftYbpgMcGJsDb) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___PWKAjQKJMOZpEmLdVcgbKIqqXTst) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___currentEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue, ___bPSooZNAhETwHGzaKhNHHZHnkBHp) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
