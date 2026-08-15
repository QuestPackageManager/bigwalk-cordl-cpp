#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Config.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Config)
namespace PlayEveryWare::EpicOnlineServices {
class Config_MemberInfo;
}
namespace PlayEveryWare::EpicOnlineServices {
struct Config__EnsureConfigFileExistsAsync_d__24;
}
namespace PlayEveryWare::EpicOnlineServices {
template<typename T>
struct Config__GetAsync_d__17_1;
}
namespace PlayEveryWare::EpicOnlineServices {
template<typename T>
class Config__IteratePropertiesAndFields_d__34_1;
}
namespace PlayEveryWare::EpicOnlineServices {
struct Config__MigrateConfigIfNeededAsync_d__10;
}
namespace PlayEveryWare::EpicOnlineServices {
struct Config__ReadAsync_d__21;
}
namespace PlayEveryWare::EpicOnlineServices {
template<typename T>
class Config___c__27_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class Config;
}
namespace PlayEveryWare::EpicOnlineServices {
class Config_MemberInfo;
}
namespace PlayEveryWare::EpicOnlineServices {
template<typename T>
class Config__IteratePropertiesAndFields_d__34_1;
}
namespace PlayEveryWare::EpicOnlineServices {
template<typename T>
class Config___c__27_1;
}
namespace PlayEveryWare::EpicOnlineServices {
struct Config__EnsureConfigFileExistsAsync_d__24;
}
namespace PlayEveryWare::EpicOnlineServices {
template<typename T>
struct Config__GetAsync_d__17_1;
}
namespace PlayEveryWare::EpicOnlineServices {
struct Config__MigrateConfigIfNeededAsync_d__10;
}
namespace PlayEveryWare::EpicOnlineServices {
struct Config__ReadAsync_d__21;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Config*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*);
MARK_GEN_REF_T_PTR(::PlayEveryWare::EpicOnlineServices::Config__IteratePropertiesAndFields_d__34_1);
MARK_GEN_REF_T_PTR(::PlayEveryWare::EpicOnlineServices::Config___c__27_1);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Config__EnsureConfigFileExistsAsync_d__24);
MARK_GEN_VAL_T(::PlayEveryWare::EpicOnlineServices::Config__GetAsync_d__17_1);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Config__MigrateConfigIfNeededAsync_d__10);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Config*, "PlayEveryWare.EpicOnlineServices", "Config");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*, "PlayEveryWare.EpicOnlineServices", "Config/MemberInfo");
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::EpicOnlineServices::Config__IteratePropertiesAndFields_d__34_1, "PlayEveryWare.EpicOnlineServices", "Config/<IteratePropertiesAndFields>d__34`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::EpicOnlineServices::Config___c__27_1, "PlayEveryWare.EpicOnlineServices", "Config/<>c__27`1");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Config__EnsureConfigFileExistsAsync_d__24, "PlayEveryWare.EpicOnlineServices", "Config/<EnsureConfigFileExistsAsync>d__24");
DEFINE_IL2CPP_GEN_CLASS(::PlayEveryWare::EpicOnlineServices::Config__GetAsync_d__17_1, "PlayEveryWare.EpicOnlineServices", "Config/<GetAsync>d__17`1");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Config__MigrateConfigIfNeededAsync_d__10, "PlayEveryWare.EpicOnlineServices", "Config/<MigrateConfigIfNeededAsync>d__10");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21, "PlayEveryWare.EpicOnlineServices", "Config/<ReadAsync>d__21");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Config/MemberInfo
class CORDL_TYPE Config_MemberInfo : public ::System::Object {
public:
// Declarations
/// @brief Field MemberType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MemberType, put=__cordl_internal_set_MemberType)) ::System::Type*  MemberType;

/// @brief Field MemberValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MemberValue, put=__cordl_internal_set_MemberValue)) ::System::Object*  MemberValue;

/// @brief Method Equals, addr 0x1805416c0, size 0x250, virtual false, abstract: false, final false
inline bool Equals(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*  a, ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*  b) ;

/// @brief Method GetHashCode, addr 0x180541910, size 0x30, virtual false, abstract: false, final false
inline int32_t GetHashCode(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*  memberInfo) ;

static inline ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo* New_ctor() ;

constexpr ::System::Type* const& __cordl_internal_get_MemberType() const;

constexpr ::System::Type*& __cordl_internal_get_MemberType() ;

constexpr ::System::Object* const& __cordl_internal_get_MemberValue() const;

constexpr ::System::Object*& __cordl_internal_get_MemberValue() ;

constexpr void __cordl_internal_set_MemberType(::System::Type*  value) ;

constexpr void __cordl_internal_set_MemberValue(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Config_MemberInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Config_MemberInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Config_MemberInfo(Config_MemberInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Config_MemberInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Config_MemberInfo(Config_MemberInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18825};

/// @brief Field MemberType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___MemberType;

/// @brief Field MemberValue, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___MemberValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo, ___MemberType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo, ___MemberValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Config/<>c__27`1<T>
class CORDL_TYPE Config___c__27_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::Config___c__27_1<T>*  __9;

/// @brief Field <>9__27_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_0, put=setStaticF___9__27_0)) ::System::Func_2<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*,bool>*  __9__27_0;

static inline ::PlayEveryWare::EpicOnlineServices::Config___c__27_1<T>* New_ctor() ;

/// @brief Method <IsDefault>b__27_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _IsDefault_b__27_0(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*  mInfo) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::Config___c__27_1<T>* getStaticF___9() ;

static inline ::System::Func_2<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*,bool>* getStaticF___9__27_0() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::Config___c__27_1<T>*  value) ;

static inline void setStaticF___9__27_0(::System::Func_2<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Config___c__27_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Config___c__27_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Config___c__27_1(Config___c__27_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Config___c__27_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Config___c__27_1(Config___c__27_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Config/<EnsureConfigFileExistsAsync>d__24
struct CORDL_TYPE Config__EnsureConfigFileExistsAsync_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180547760, size 0x1b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1804428d0, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Config__EnsureConfigFileExistsAsync_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::PlayEveryWare::EpicOnlineServices::Config*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr Config__EnsureConfigFileExistsAsync_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::PlayEveryWare::EpicOnlineServices::Config*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18827};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::Config*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__EnsureConfigFileExistsAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__EnsureConfigFileExistsAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__EnsureConfigFileExistsAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__EnsureConfigFileExistsAsync_d__24, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Config__EnsureConfigFileExistsAsync_d__24) == 0x30, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace PlayEveryWare::EpicOnlineServices {
// cpp template
template<typename T>
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Config/<GetAsync>d__17`1<T>
struct CORDL_TYPE Config__GetAsync_d__17_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Config__GetAsync_d__17_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "_instance_5__2", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr Config__GetAsync_d__17_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, T  _instance_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18828};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field <instance>5__2, offset: 0x20, size: 0x8, def value: None
 T  _instance_5__2;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object, System.Reflection.BindingFlags, System.Reflection.FieldInfo, System.Reflection.PropertyInfo
namespace PlayEveryWare::EpicOnlineServices {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Config/<IteratePropertiesAndFields>d__34`1<T>
class CORDL_TYPE Config__IteratePropertiesAndFields_d__34_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_PlayEveryWare_EpicOnlineServices_Config_MemberInfo__get_Current)) ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*  System_Collections_Generic_IEnumerator_PlayEveryWare_EpicOnlineServices_Config_MemberInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*  __2__current;

/// @brief Field <>3__bindingAttr, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___3__bindingAttr, put=__cordl_internal_set___3__bindingAttr)) ::System::Reflection::BindingFlags  __3__bindingAttr;

/// @brief Field <>3__instance, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__instance, put=__cordl_internal_set___3__instance)) T  __3__instance;

/// @brief Field <>7__wrap1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::ArrayW<::System::Reflection::PropertyInfo*>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) int32_t  __7__wrap2;

/// @brief Field <>7__wrap3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) ::ArrayW<::System::Reflection::FieldInfo*>  __7__wrap3;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field bindingAttr, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_bindingAttr, put=__cordl_internal_set_bindingAttr)) ::System::Reflection::BindingFlags  bindingAttr;

/// @brief Field instance, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) T  instance;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::PlayEveryWare::EpicOnlineServices::Config__IteratePropertiesAndFields_d__34_1<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<PlayEveryWare.EpicOnlineServices.Config.MemberInfo>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>* System_Collections_Generic_IEnumerable_PlayEveryWare_EpicOnlineServices_Config_MemberInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<PlayEveryWare.EpicOnlineServices.Config.MemberInfo>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo* System_Collections_Generic_IEnumerator_PlayEveryWare_EpicOnlineServices_Config_MemberInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo* const& __cordl_internal_get___2__current() const;

constexpr ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*& __cordl_internal_get___2__current() ;

constexpr ::System::Reflection::BindingFlags const& __cordl_internal_get___3__bindingAttr() const;

constexpr ::System::Reflection::BindingFlags& __cordl_internal_get___3__bindingAttr() ;

constexpr T const& __cordl_internal_get___3__instance() const;

constexpr T& __cordl_internal_get___3__instance() ;

constexpr ::ArrayW<::System::Reflection::PropertyInfo*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::ArrayW<::System::Reflection::PropertyInfo*>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

constexpr int32_t& __cordl_internal_get___7__wrap2() ;

constexpr ::ArrayW<::System::Reflection::FieldInfo*> const& __cordl_internal_get___7__wrap3() const;

constexpr ::ArrayW<::System::Reflection::FieldInfo*>& __cordl_internal_get___7__wrap3() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Reflection::BindingFlags const& __cordl_internal_get_bindingAttr() const;

constexpr ::System::Reflection::BindingFlags& __cordl_internal_get_bindingAttr() ;

constexpr T const& __cordl_internal_get_instance() const;

constexpr T& __cordl_internal_get_instance() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*  value) ;

constexpr void __cordl_internal_set___3__bindingAttr(::System::Reflection::BindingFlags  value) ;

constexpr void __cordl_internal_set___3__instance(T  value) ;

constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::System::Reflection::PropertyInfo*>  value) ;

constexpr void __cordl_internal_set___7__wrap2(int32_t  value) ;

constexpr void __cordl_internal_set___7__wrap3(::ArrayW<::System::Reflection::FieldInfo*>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_bindingAttr(::System::Reflection::BindingFlags  value) ;

constexpr void __cordl_internal_set_instance(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>* i___System__Collections__Generic__IEnumerable_1___PlayEveryWare__EpicOnlineServices__Config_MemberInfo__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>* i___System__Collections__Generic__IEnumerator_1___PlayEveryWare__EpicOnlineServices__Config_MemberInfo__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Config__IteratePropertiesAndFields_d__34_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Config__IteratePropertiesAndFields_d__34_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Config__IteratePropertiesAndFields_d__34_1(Config__IteratePropertiesAndFields_d__34_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Config__IteratePropertiesAndFields_d__34_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Config__IteratePropertiesAndFields_d__34_1(Config__IteratePropertiesAndFields_d__34_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18829};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field bindingAttr, offset: 0x24, size: 0x4, def value: None
 ::System::Reflection::BindingFlags  ___bindingAttr;

/// @brief Field <>3__bindingAttr, offset: 0x28, size: 0x4, def value: None
 ::System::Reflection::BindingFlags  _____3__bindingAttr;

/// @brief Field instance, offset: 0x30, size: 0x8, def value: None
 T  ___instance;

/// @brief Field <>3__instance, offset: 0x38, size: 0x8, def value: None
 T  _____3__instance;

/// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::PropertyInfo*>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x48, size: 0x4, def value: None
 int32_t  _____7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::FieldInfo*>  _____7__wrap3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Config/<MigrateConfigIfNeededAsync>d__10
struct CORDL_TYPE Config__MigrateConfigIfNeededAsync_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180547b60, size 0xb0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1804428d0, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Config__MigrateConfigIfNeededAsync_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::PlayEveryWare::EpicOnlineServices::Config*", modifiers: "", def_value: None }]
constexpr Config__MigrateConfigIfNeededAsync_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::PlayEveryWare::EpicOnlineServices::Config*  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18830};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::Config*  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__MigrateConfigIfNeededAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__MigrateConfigIfNeededAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__MigrateConfigIfNeededAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Config__MigrateConfigIfNeededAsync_d__10) == 0x28, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Config/<ReadAsync>d__21
struct CORDL_TYPE Config__ReadAsync_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180548210, size 0x2e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1804428d0, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Config__ReadAsync_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::PlayEveryWare::EpicOnlineServices::Config*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr Config__ReadAsync_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::PlayEveryWare::EpicOnlineServices::Config*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::Config*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

/// @brief Field <>u__3, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21, __u__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21, __u__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21) == 0x40, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Config
class CORDL_TYPE Config : public ::System::Object {
public:
// Declarations
using MemberInfo = ::PlayEveryWare::EpicOnlineServices::Config_MemberInfo;

using _EnsureConfigFileExistsAsync_d__24 = ::PlayEveryWare::EpicOnlineServices::Config__EnsureConfigFileExistsAsync_d__24;

template<typename T>
using _GetAsync_d__17_1 = ::PlayEveryWare::EpicOnlineServices::Config__GetAsync_d__17_1<T>;

template<typename T>
using _IteratePropertiesAndFields_d__34_1 = ::PlayEveryWare::EpicOnlineServices::Config__IteratePropertiesAndFields_d__34_1<T>;

using _MigrateConfigIfNeededAsync_d__10 = ::PlayEveryWare::EpicOnlineServices::Config__MigrateConfigIfNeededAsync_d__10;

using _ReadAsync_d__21 = ::PlayEveryWare::EpicOnlineServices::Config__ReadAsync_d__21;

template<typename T>
using __c__27_1 = ::PlayEveryWare::EpicOnlineServices::Config___c__27_1<T>;

/// @brief Field CURRENT_SCHEMA_VERSION, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CURRENT_SCHEMA_VERSION, put=setStaticF_CURRENT_SCHEMA_VERSION)) ::System::Version*  CURRENT_SCHEMA_VERSION;

/// @brief Field Directory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Directory, put=__cordl_internal_set_Directory)) ::StringW  Directory;

 __declspec(property(get=get_FilePath)) ::StringW  FilePath;

/// @brief Field Filename, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Filename, put=__cordl_internal_set_Filename)) ::StringW  Filename;

/// @brief Field _allowDefaultIfFileNotFound, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowDefaultIfFileNotFound, put=__cordl_internal_set__allowDefaultIfFileNotFound)) bool  _allowDefaultIfFileNotFound;

/// @brief Field _lastReadJsonString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastReadJsonString, put=__cordl_internal_set__lastReadJsonString)) ::StringW  _lastReadJsonString;

/// @brief Field s_cachedConfigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cachedConfigs, put=setStaticF_s_cachedConfigs)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::Config*>*  s_cachedConfigs;

/// @brief Field s_factories, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_factories, put=setStaticF_s_factories)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<::PlayEveryWare::EpicOnlineServices::Config*>*>*  s_factories;

/// @brief Field schemaVersion, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_schemaVersion, put=__cordl_internal_set_schemaVersion)) ::System::Version*  schemaVersion;

/// @brief Method Clone, addr 0x180535a00, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method EnsureConfigFileExistsAsync, addr 0x180535a10, size 0x90, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* EnsureConfigFileExistsAsync() ;

/// @brief Method Equals, addr 0x180535aa0, size 0xf0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Get() ;

/// @brief Method GetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* GetAsync() ;

/// @brief Method GetDefaultValue, addr 0x180535b90, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Object* GetDefaultValue(::System::Type*  type) ;

/// @brief Method GetHashCode, addr 0x180535c40, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefault, addr 0x180535c70, size 0x10, virtual false, abstract: false, final false
inline bool IsDefault() ;

/// @brief Method IsDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsDefault(T  configInstance) ;

/// @brief Method IteratePropertiesAndFields, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::Config_MemberInfo*>* IteratePropertiesAndFields(T  instance, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method MigrateConfig, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void MigrateConfig() ;

/// @brief Method MigrateConfigIfNeeded, addr 0x180535d10, size 0x50, virtual false, abstract: false, final false
inline void MigrateConfigIfNeeded() ;

/// @brief Method MigrateConfigIfNeededAsync, addr 0x180535c80, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* MigrateConfigIfNeededAsync() ;

/// @brief Method MigrateConfigIfNeededInternal, addr 0x180535d10, size 0x50, virtual false, abstract: false, final false
inline void MigrateConfigIfNeededInternal() ;

/// @brief Method NeedsMigration, addr 0x180535d60, size 0x140, virtual true, abstract: false, final false
inline bool NeedsMigration() ;

static inline ::PlayEveryWare::EpicOnlineServices::Config* New_ctor(::StringW  filename, bool  allowDefault) ;

static inline ::PlayEveryWare::EpicOnlineServices::Config* New_ctor(::StringW  filename, ::StringW  directory, bool  allowDefault) ;

/// @brief Method OnReadCompleted, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnReadCompleted() ;

/// @brief Method Read, addr 0x180535f30, size 0x80, virtual true, abstract: false, final false
inline void Read() ;

/// @brief Method ReadAsync, addr 0x180535ea0, size 0x90, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReadAsync() ;

/// @brief Method RegisterFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterFactory(::System::Func_1<T>*  factory) ;

/// @brief Method TryGetFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryGetFactory(::by_ref<::System::Func_1<::PlayEveryWare::EpicOnlineServices::Config*>*>  factory) ;

constexpr ::StringW const& __cordl_internal_get_Directory() const;

constexpr ::StringW& __cordl_internal_get_Directory() ;

constexpr ::StringW const& __cordl_internal_get_Filename() const;

constexpr ::StringW& __cordl_internal_get_Filename() ;

constexpr bool const& __cordl_internal_get__allowDefaultIfFileNotFound() const;

constexpr bool& __cordl_internal_get__allowDefaultIfFileNotFound() ;

constexpr ::StringW const& __cordl_internal_get__lastReadJsonString() const;

constexpr ::StringW& __cordl_internal_get__lastReadJsonString() ;

constexpr ::System::Version* const& __cordl_internal_get_schemaVersion() const;

constexpr ::System::Version*& __cordl_internal_get_schemaVersion() ;

constexpr void __cordl_internal_set_Directory(::StringW  value) ;

constexpr void __cordl_internal_set_Filename(::StringW  value) ;

constexpr void __cordl_internal_set__allowDefaultIfFileNotFound(bool  value) ;

constexpr void __cordl_internal_set__lastReadJsonString(::StringW  value) ;

constexpr void __cordl_internal_set_schemaVersion(::System::Version*  value) ;

/// @brief Method .ctor, addr 0x1805360a0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, bool  allowDefault) ;

/// @brief Method .ctor, addr 0x180536170, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::StringW  directory, bool  allowDefault) ;

static inline ::System::Version* getStaticF_CURRENT_SCHEMA_VERSION() ;

static inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::Config*>* getStaticF_s_cachedConfigs() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<::PlayEveryWare::EpicOnlineServices::Config*>*>* getStaticF_s_factories() ;

/// @brief Method get_FilePath, addr 0x1805361c0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_FilePath() ;

/// @brief Method op_Equality, addr 0x180536240, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::PlayEveryWare::EpicOnlineServices::Config*  left, ::PlayEveryWare::EpicOnlineServices::Config*  right) ;

/// @brief Method op_Inequality, addr 0x180536270, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::PlayEveryWare::EpicOnlineServices::Config*  left, ::PlayEveryWare::EpicOnlineServices::Config*  right) ;

static inline void setStaticF_CURRENT_SCHEMA_VERSION(::System::Version*  value) ;

static inline void setStaticF_s_cachedConfigs(::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::Config*>*  value) ;

static inline void setStaticF_s_factories(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<::PlayEveryWare::EpicOnlineServices::Config*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Config() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Config", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Config(Config && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Config", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Config(Config const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18832};

/// @brief Field Filename, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Filename;

/// @brief Field Directory, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Directory;

/// @brief Field _lastReadJsonString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____lastReadJsonString;

/// @brief Field _allowDefaultIfFileNotFound, offset: 0x28, size: 0x1, def value: None
 bool  ____allowDefaultIfFileNotFound;

/// @brief Field schemaVersion, offset: 0x30, size: 0x8, def value: None
 ::System::Version*  ___schemaVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config, ___Filename) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config, ___Directory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config, ____lastReadJsonString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config, ____allowDefaultIfFileNotFound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Config, ___schemaVersion) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Config) == 0x38, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
