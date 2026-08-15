#pragma once
// IWYU pragma private; include "Mirror/SyncObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__SyncObject_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__SyncObject_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Mirror::SyncObject___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncObject___c::*)()>(&::Mirror::SyncObject___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncObject___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SyncObject___c.__ctor_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SyncObject___c::*)()>(&::Mirror::SyncObject___c::__ctor_b__9_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncObject___c*>(),
                        {"<.ctor>b__9_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SyncObject___c.__ctor_b__9_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SyncObject___c::*)()>(&::Mirror::SyncObject___c::__ctor_b__9_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncObject___c*>(),
                        {"<.ctor>b__9_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SyncObject___c::setStaticF___9(::Mirror::SyncObject___c*  value)  {
::cordl_internals::setStaticField<::Mirror::SyncObject___c*, "<>9", ::Mirror::SyncObject___c*>(std::forward<::Mirror::SyncObject___c*>(value));
}
inline ::Mirror::SyncObject___c* Mirror::SyncObject___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::SyncObject___c*, "<>9", ::Mirror::SyncObject___c*>();
}
inline void Mirror::SyncObject___c::setStaticF___9__9_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__9_0", ::Mirror::SyncObject___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* Mirror::SyncObject___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__9_0", ::Mirror::SyncObject___c*>();
}
inline void Mirror::SyncObject___c::setStaticF___9__9_1(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__9_1", ::Mirror::SyncObject___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* Mirror::SyncObject___c::getStaticF___9__9_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__9_1", ::Mirror::SyncObject___c*>();
}
inline void Mirror::SyncObject___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncObject___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::SyncObject___c::__ctor_b__9_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncObject___c*>(),
                        {"<.ctor>b__9_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::SyncObject___c::__ctor_b__9_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncObject___c*>(),
                        {"<.ctor>b__9_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mirror::SyncObject___c* Mirror::SyncObject___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncObject___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::SyncObject___c::SyncObject___c()   {
}
//  Writing Method size for method: ::Mirror::SyncObject.ClearChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncObject::*)()>(&::Mirror::SyncObject::ClearChanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SyncObject*>(),
                    {::i2c::class_of<::Mirror::SyncObject*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SyncObject.OnSerializeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncObject::*)(::Mirror::NetworkWriter*)>(&::Mirror::SyncObject::OnSerializeAll)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SyncObject*>(),
                    {::i2c::class_of<::Mirror::SyncObject*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SyncObject.OnSerializeDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncObject::*)(::Mirror::NetworkWriter*)>(&::Mirror::SyncObject::OnSerializeDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SyncObject*>(),
                    {::i2c::class_of<::Mirror::SyncObject*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SyncObject.OnDeserializeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncObject::*)(::Mirror::NetworkReader*)>(&::Mirror::SyncObject::OnDeserializeAll)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SyncObject*>(),
                    {::i2c::class_of<::Mirror::SyncObject*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SyncObject.OnDeserializeDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncObject::*)(::Mirror::NetworkReader*)>(&::Mirror::SyncObject::OnDeserializeDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SyncObject*>(),
                    {::i2c::class_of<::Mirror::SyncObject*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SyncObject.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncObject::*)()>(&::Mirror::SyncObject::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SyncObject*>(),
                    {::i2c::class_of<::Mirror::SyncObject*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SyncObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncObject::*)()>(&::Mirror::SyncObject::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181598450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Mirror::SyncObject::__cordl_internal_get_OnDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDirty;
}
constexpr ::System::Action* const& Mirror::SyncObject::__cordl_internal_get_OnDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDirty;
}
constexpr void Mirror::SyncObject::__cordl_internal_set_OnDirty(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDirty = value;
}
constexpr ::System::Func_1<bool>*& Mirror::SyncObject::__cordl_internal_get_IsRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsRecording;
}
constexpr ::System::Func_1<bool>* const& Mirror::SyncObject::__cordl_internal_get_IsRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsRecording;
}
constexpr void Mirror::SyncObject::__cordl_internal_set_IsRecording(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsRecording = value;
}
constexpr ::System::Func_1<bool>*& Mirror::SyncObject::__cordl_internal_get_IsWritable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsWritable;
}
constexpr ::System::Func_1<bool>* const& Mirror::SyncObject::__cordl_internal_get_IsWritable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsWritable;
}
constexpr void Mirror::SyncObject::__cordl_internal_set_IsWritable(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsWritable = value;
}
inline void Mirror::SyncObject::ClearChanges()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncObject*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SyncObject::OnSerializeAll(::Mirror::NetworkWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncObject*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void Mirror::SyncObject::OnSerializeDelta(::Mirror::NetworkWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncObject*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void Mirror::SyncObject::OnDeserializeAll(::Mirror::NetworkReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncObject*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Mirror::SyncObject::OnDeserializeDelta(::Mirror::NetworkReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncObject*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Mirror::SyncObject::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SyncObject*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SyncObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SyncObject* Mirror::SyncObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncObject*>());
}
// Ctor Parameters []
constexpr ::Mirror::SyncObject::SyncObject()   {
}
