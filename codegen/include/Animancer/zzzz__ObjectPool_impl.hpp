#pragma once
// IWYU pragma private; include "Animancer/ObjectPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__ObjectPool_def.hpp"
#include "Animancer/zzzz__ObjectPool_1_def.hpp"
#include "Animancer/zzzz__ObjectPool_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
//  Writing Method size for method: ::Animancer::Disposable_ObjectPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Disposable_ObjectPool___c::*)()>(&::Animancer::Disposable_ObjectPool___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Disposable_ObjectPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Disposable_ObjectPool___c._AcquireContent_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Disposable_ObjectPool___c::*)(::UnityEngine::GUIContent*)>(&::Animancer::Disposable_ObjectPool___c::_AcquireContent_b__3_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f5c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Disposable_ObjectPool___c*>(),
                        {"<AcquireContent>b__3_0", {}, {::i2c::type_of<::UnityEngine::GUIContent*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Disposable_ObjectPool___c::setStaticF___9(::Animancer::Disposable_ObjectPool___c*  value)  {
::cordl_internals::setStaticField<::Animancer::Disposable_ObjectPool___c*, "<>9", ::Animancer::Disposable_ObjectPool___c*>(std::forward<::Animancer::Disposable_ObjectPool___c*>(value));
}
inline ::Animancer::Disposable_ObjectPool___c* Animancer::Disposable_ObjectPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Animancer::Disposable_ObjectPool___c*, "<>9", ::Animancer::Disposable_ObjectPool___c*>();
}
inline void Animancer::Disposable_ObjectPool___c::setStaticF___9__3_0(::System::Action_1<::UnityEngine::GUIContent*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::GUIContent*>*, "<>9__3_0", ::Animancer::Disposable_ObjectPool___c*>(std::forward<::System::Action_1<::UnityEngine::GUIContent*>*>(value));
}
inline ::System::Action_1<::UnityEngine::GUIContent*>* Animancer::Disposable_ObjectPool___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::GUIContent*>*, "<>9__3_0", ::Animancer::Disposable_ObjectPool___c*>();
}
inline void Animancer::Disposable_ObjectPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Disposable_ObjectPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Disposable_ObjectPool___c::_AcquireContent_b__3_0(::UnityEngine::GUIContent*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Disposable_ObjectPool___c*>(),
                        {"<AcquireContent>b__3_0", {}, {::i2c::type_of<::UnityEngine::GUIContent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline ::Animancer::Disposable_ObjectPool___c* Animancer::Disposable_ObjectPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Disposable_ObjectPool___c*>());
}
// Ctor Parameters []
constexpr ::Animancer::Disposable_ObjectPool___c::Disposable_ObjectPool___c()   {
}
template<typename T>
inline void Animancer::Disposable_ObjectPool___c__1_1<T>::setStaticF___9(::Animancer::Disposable_ObjectPool___c__1_1<T>*  value)  {
::cordl_internals::setStaticField<::Animancer::Disposable_ObjectPool___c__1_1<T>*, "<>9", ::Animancer::Disposable_ObjectPool___c__1_1<T>*>(std::forward<::Animancer::Disposable_ObjectPool___c__1_1<T>*>(value));
}
template<typename T>
inline ::Animancer::Disposable_ObjectPool___c__1_1<T>* Animancer::Disposable_ObjectPool___c__1_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Animancer::Disposable_ObjectPool___c__1_1<T>*, "<>9", ::Animancer::Disposable_ObjectPool___c__1_1<T>*>();
}
template<typename T>
inline void Animancer::Disposable_ObjectPool___c__1_1<T>::setStaticF___9__1_0(::System::Action_1<::System::Collections::Generic::List_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Collections::Generic::List_1<T>*>*, "<>9__1_0", ::Animancer::Disposable_ObjectPool___c__1_1<T>*>(std::forward<::System::Action_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Collections::Generic::List_1<T>*>* Animancer::Disposable_ObjectPool___c__1_1<T>::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Collections::Generic::List_1<T>*>*, "<>9__1_0", ::Animancer::Disposable_ObjectPool___c__1_1<T>*>();
}
template<typename T>
inline void Animancer::Disposable_ObjectPool___c__1_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Disposable_ObjectPool___c__1_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Animancer::Disposable_ObjectPool___c__1_1<T>::_AcquireList_b__1_0(::System::Collections::Generic::List_1<T>*  l)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Disposable_ObjectPool___c__1_1<T>*>(),
                        {"<AcquireList>b__1_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, l);
}
template<typename T>
inline ::Animancer::Disposable_ObjectPool___c__1_1<T>* Animancer::Disposable_ObjectPool___c__1_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Disposable_ObjectPool___c__1_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::Disposable_ObjectPool___c__1_1<T>::Disposable_ObjectPool___c__1_1()   {
}
template<typename T>
inline void Animancer::Disposable_ObjectPool___c__2_1<T>::setStaticF___9(::Animancer::Disposable_ObjectPool___c__2_1<T>*  value)  {
::cordl_internals::setStaticField<::Animancer::Disposable_ObjectPool___c__2_1<T>*, "<>9", ::Animancer::Disposable_ObjectPool___c__2_1<T>*>(std::forward<::Animancer::Disposable_ObjectPool___c__2_1<T>*>(value));
}
template<typename T>
inline ::Animancer::Disposable_ObjectPool___c__2_1<T>* Animancer::Disposable_ObjectPool___c__2_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Animancer::Disposable_ObjectPool___c__2_1<T>*, "<>9", ::Animancer::Disposable_ObjectPool___c__2_1<T>*>();
}
template<typename T>
inline void Animancer::Disposable_ObjectPool___c__2_1<T>::setStaticF___9__2_0(::System::Action_1<::System::Collections::Generic::HashSet_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Collections::Generic::HashSet_1<T>*>*, "<>9__2_0", ::Animancer::Disposable_ObjectPool___c__2_1<T>*>(std::forward<::System::Action_1<::System::Collections::Generic::HashSet_1<T>*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Collections::Generic::HashSet_1<T>*>* Animancer::Disposable_ObjectPool___c__2_1<T>::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Collections::Generic::HashSet_1<T>*>*, "<>9__2_0", ::Animancer::Disposable_ObjectPool___c__2_1<T>*>();
}
template<typename T>
inline void Animancer::Disposable_ObjectPool___c__2_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Disposable_ObjectPool___c__2_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Animancer::Disposable_ObjectPool___c__2_1<T>::_AcquireSet_b__2_0(::System::Collections::Generic::HashSet_1<T>*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Disposable_ObjectPool___c__2_1<T>*>(),
                        {"<AcquireSet>b__2_0", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
template<typename T>
inline ::Animancer::Disposable_ObjectPool___c__2_1<T>* Animancer::Disposable_ObjectPool___c__2_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Disposable_ObjectPool___c__2_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::Disposable_ObjectPool___c__2_1<T>::Disposable_ObjectPool___c__2_1()   {
}
//  Writing Method size for method: ::Animancer::ObjectPool_Disposable.AcquireContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ObjectPool_1_Disposable<::UnityEngine::GUIContent*> (*)(::by_ref<::UnityEngine::GUIContent*>, ::StringW, ::StringW, bool)>(&::Animancer::ObjectPool_Disposable::AcquireContent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802ecc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_Disposable*>(),
                        {"AcquireContent", {}, {::i2c::type_of<::by_ref<::UnityEngine::GUIContent*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::Animancer::ObjectPool_1_Disposable<T> Animancer::ObjectPool_Disposable::Acquire(::by_ref<T>  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool_Disposable*>(),
                    {"Acquire", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ObjectPool_1_Disposable<T>>(nullptr, ___internal_method, item);
}
template<typename T>
inline ::Animancer::ObjectPool_1_Disposable<::System::Collections::Generic::List_1<T>*> Animancer::ObjectPool_Disposable::AcquireList(::by_ref<::System::Collections::Generic::List_1<T>*>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool_Disposable*>(),
                    {"AcquireList", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ObjectPool_1_Disposable<::System::Collections::Generic::List_1<T>*>>(nullptr, ___internal_method, list);
}
template<typename T>
inline ::Animancer::ObjectPool_1_Disposable<::System::Collections::Generic::HashSet_1<T>*> Animancer::ObjectPool_Disposable::AcquireSet(::by_ref<::System::Collections::Generic::HashSet_1<T>*>  set)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool_Disposable*>(),
                    {"AcquireSet", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ObjectPool_1_Disposable<::System::Collections::Generic::HashSet_1<T>*>>(nullptr, ___internal_method, set);
}
inline ::Animancer::ObjectPool_1_Disposable<::UnityEngine::GUIContent*> Animancer::ObjectPool_Disposable::AcquireContent(::by_ref<::UnityEngine::GUIContent*>  content, ::StringW  text, ::StringW  tooltip, bool  narrowText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool_Disposable*>(),
                        {"AcquireContent", {}, {::i2c::type_of<::by_ref<::UnityEngine::GUIContent*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ObjectPool_1_Disposable<::UnityEngine::GUIContent*>>(nullptr, ___internal_method, content, text, tooltip, narrowText);
}
// Ctor Parameters []
constexpr ::Animancer::ObjectPool_Disposable::ObjectPool_Disposable()   {
}
//  Writing Method size for method: ::Animancer::ObjectPool.AcquireStringBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)()>(&::Animancer::ObjectPool::AcquireStringBuilder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f1660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool*>(),
                        {"AcquireStringBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ObjectPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::Animancer::ObjectPool::Release)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f1700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool*>(),
                        {"Release", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ObjectPool.ReleaseToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Text::StringBuilder*)>(&::Animancer::ObjectPool::ReleaseToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f1690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool*>(),
                        {"ReleaseToString", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline T Animancer::ObjectPool::Acquire()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Acquire", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void Animancer::ObjectPool::Acquire(::by_ref<T>  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Acquire", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
template<typename T>
inline void Animancer::ObjectPool::Release(T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Release", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
template<typename T>
inline void Animancer::ObjectPool::Release(::by_ref<T>  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Release", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Animancer::ObjectPool::AcquireList()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"AcquireList", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method);
}
template<typename T>
inline void Animancer::ObjectPool::Acquire(::by_ref<::System::Collections::Generic::List_1<T>*>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Acquire", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template<typename T>
inline void Animancer::ObjectPool::Release(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Release", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template<typename T>
inline void Animancer::ObjectPool::Release(::by_ref<::System::Collections::Generic::List_1<T>*>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Release", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template<typename T>
inline ::System::Collections::Generic::HashSet_1<T>* Animancer::ObjectPool::AcquireSet()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"AcquireSet", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*>(nullptr, ___internal_method);
}
template<typename T>
inline void Animancer::ObjectPool::Acquire(::by_ref<::System::Collections::Generic::HashSet_1<T>*>  set)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Acquire", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, set);
}
template<typename T>
inline void Animancer::ObjectPool::Release(::System::Collections::Generic::HashSet_1<T>*  set)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Release", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, set);
}
template<typename T>
inline void Animancer::ObjectPool::Release(::by_ref<::System::Collections::Generic::HashSet_1<T>*>  set)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ObjectPool*>(),
                    {"Release", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, set);
}
inline ::System::Text::StringBuilder* Animancer::ObjectPool::AcquireStringBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool*>(),
                        {"AcquireStringBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method);
}
inline void Animancer::ObjectPool::Release(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool*>(),
                        {"Release", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline ::StringW Animancer::ObjectPool::ReleaseToString(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ObjectPool*>(),
                        {"ReleaseToString", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, builder);
}
// Ctor Parameters []
constexpr ::Animancer::ObjectPool::ObjectPool()   {
}
