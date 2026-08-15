#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Progress.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Progress)
namespace Cysharp::Threading::Tasks {
template<typename T>
class Progress_AnonymousProgress_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class Progress_NullProgress_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class Progress_OnlyValueChangedProgress_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
class IProgress_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class Progress;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class Progress_AnonymousProgress_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class Progress_NullProgress_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class Progress_OnlyValueChangedProgress_1;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Progress*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Progress_NullProgress_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Progress*, "Cysharp.Threading.Tasks", "Progress");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1, "Cysharp.Threading.Tasks", "Progress/AnonymousProgress`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Progress_NullProgress_1, "Cysharp.Threading.Tasks", "Progress/NullProgress`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1, "Cysharp.Threading.Tasks", "Progress/OnlyValueChangedProgress`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Progress/NullProgress`1<T>
class CORDL_TYPE Progress_NullProgress_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::System::IProgress_1<T>*  Instance;

/// @brief Convert operator to "::System::IProgress_1<T>"
constexpr operator  ::System::IProgress_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>* New_ctor() ;

/// @brief Method Report, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Report(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IProgress_1<T>* getStaticF_Instance() ;

/// @brief Convert to "::System::IProgress_1<T>"
constexpr ::System::IProgress_1<T>* i___System__IProgress_1_T_() noexcept;

static inline void setStaticF_Instance(::System::IProgress_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Progress_NullProgress_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Progress_NullProgress_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Progress_NullProgress_1(Progress_NullProgress_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Progress_NullProgress_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Progress_NullProgress_1(Progress_NullProgress_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14260};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Progress/AnonymousProgress`1<T>
class CORDL_TYPE Progress_AnonymousProgress_1 : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_1<T>*  action;

/// @brief Convert operator to "::System::IProgress_1<T>"
constexpr operator  ::System::IProgress_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>* New_ctor(::System::Action_1<T>*  action) ;

/// @brief Method Report, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Report(T  value) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_action() ;

constexpr void __cordl_internal_set_action(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<T>*  action) ;

/// @brief Convert to "::System::IProgress_1<T>"
constexpr ::System::IProgress_1<T>* i___System__IProgress_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Progress_AnonymousProgress_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Progress_AnonymousProgress_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Progress_AnonymousProgress_1(Progress_AnonymousProgress_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Progress_AnonymousProgress_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Progress_AnonymousProgress_1(Progress_AnonymousProgress_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14261};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Progress/OnlyValueChangedProgress`1<T>
class CORDL_TYPE Progress_OnlyValueChangedProgress_1 : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_1<T>*  action;

/// @brief Field comparer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer;

/// @brief Field isFirstCall, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFirstCall, put=__cordl_internal_set_isFirstCall)) bool  isFirstCall;

/// @brief Field latestValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestValue, put=__cordl_internal_set_latestValue)) T  latestValue;

/// @brief Convert operator to "::System::IProgress_1<T>"
constexpr operator  ::System::IProgress_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>* New_ctor(::System::Action_1<T>*  action, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method Report, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Report(T  value) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_action() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& __cordl_internal_get_comparer() ;

constexpr bool const& __cordl_internal_get_isFirstCall() const;

constexpr bool& __cordl_internal_get_isFirstCall() ;

constexpr T const& __cordl_internal_get_latestValue() const;

constexpr T& __cordl_internal_get_latestValue() ;

constexpr void __cordl_internal_set_action(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

constexpr void __cordl_internal_set_isFirstCall(bool  value) ;

constexpr void __cordl_internal_set_latestValue(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<T>*  action, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Convert to "::System::IProgress_1<T>"
constexpr ::System::IProgress_1<T>* i___System__IProgress_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Progress_OnlyValueChangedProgress_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Progress_OnlyValueChangedProgress_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Progress_OnlyValueChangedProgress_1(Progress_OnlyValueChangedProgress_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Progress_OnlyValueChangedProgress_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Progress_OnlyValueChangedProgress_1(Progress_OnlyValueChangedProgress_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14262};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  ___action;

/// @brief Field comparer, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<T>*  ___comparer;

/// @brief Field isFirstCall, offset: 0x20, size: 0x1, def value: None
 bool  ___isFirstCall;

/// @brief Field latestValue, offset: 0x28, size: 0x8, def value: None
 T  ___latestValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Progress
class CORDL_TYPE Progress : public ::System::Object {
public:
// Declarations
template<typename T>
using AnonymousProgress_1 = ::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>;

template<typename T>
using NullProgress_1 = ::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>;

template<typename T>
using OnlyValueChangedProgress_1 = ::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IProgress_1<T>* Create(::System::Action_1<T>*  handler) ;

/// @brief Method CreateOnlyValueChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IProgress_1<T>* CreateOnlyValueChanged(::System::Action_1<T>*  handler, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Progress() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Progress", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Progress(Progress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Progress", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Progress(Progress const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14263};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Progress) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
