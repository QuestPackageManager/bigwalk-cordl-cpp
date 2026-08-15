#pragma once
// IWYU pragma private; include "Dissonance/Threading/ReadonlyLockedValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReadonlyLockedValue_1)
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1_Unlocker;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1_Unlocker;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Threading::ReadonlyLockedValue_1);
MARK_GEN_REF_T_PTR(::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Threading::ReadonlyLockedValue_1, "Dissonance.Threading", "ReadonlyLockedValue`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker, "Dissonance.Threading", "ReadonlyLockedValue`1/Unlocker");
// Dependencies System.Object
namespace Dissonance::Threading {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Threading.ReadonlyLockedValue`1/Unlocker<T>
class CORDL_TYPE ReadonlyLockedValue_1_Unlocker : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Value)) T  Value;

/// @brief Field _parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::Dissonance::Threading::ReadonlyLockedValue_1<T>*  _parent;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<T>* New_ctor(::Dissonance::Threading::ReadonlyLockedValue_1<T>*  parent) ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<T>* const& __cordl_internal_get__parent() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<T>*& __cordl_internal_get__parent() ;

constexpr void __cordl_internal_set__parent(::Dissonance::Threading::ReadonlyLockedValue_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Threading::ReadonlyLockedValue_1<T>*  parent) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadonlyLockedValue_1_Unlocker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadonlyLockedValue_1_Unlocker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadonlyLockedValue_1_Unlocker(ReadonlyLockedValue_1_Unlocker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadonlyLockedValue_1_Unlocker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadonlyLockedValue_1_Unlocker(ReadonlyLockedValue_1_Unlocker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16861};

/// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<T>*  ____parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Threading
// Dependencies System.Object
namespace Dissonance::Threading {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Threading.ReadonlyLockedValue`1<T>
class CORDL_TYPE ReadonlyLockedValue_1 : public ::System::Object {
public:
// Declarations
using Unlocker = ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<T>;

/// @brief Field _lockObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__lockObject, put=__cordl_internal_set__lockObject)) ::System::Object*  _lockObject;

/// @brief Field _unlocker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__unlocker, put=__cordl_internal_set__unlocker)) ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<T>*  _unlocker;

/// @brief Field _value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) T  _value;

/// @brief Method Lock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<T>* Lock() ;

static inline ::Dissonance::Threading::ReadonlyLockedValue_1<T>* New_ctor(T  value) ;

/// @brief Method Unlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Unlock() ;

constexpr ::System::Object* const& __cordl_internal_get__lockObject() const;

constexpr ::System::Object*& __cordl_internal_get__lockObject() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<T>* const& __cordl_internal_get__unlocker() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<T>*& __cordl_internal_get__unlocker() ;

constexpr T const& __cordl_internal_get__value() const;

constexpr T& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__lockObject(::System::Object*  value) ;

constexpr void __cordl_internal_set__unlocker(::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<T>*  value) ;

constexpr void __cordl_internal_set__value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadonlyLockedValue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadonlyLockedValue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadonlyLockedValue_1(ReadonlyLockedValue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadonlyLockedValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadonlyLockedValue_1(ReadonlyLockedValue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16862};

/// @brief Field _value, offset: 0x10, size: 0x8, def value: None
 T  ____value;

/// @brief Field _lockObject, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____lockObject;

/// @brief Field _unlocker, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<T>*  ____unlocker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Threading
