#pragma once
// IWYU pragma private; include "Dissonance/Networking/ClientIdCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/zzzz__ClientIdCollection_def.hpp"
#include "Dissonance/Networking/zzzz__ClientIdCollection_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_def.hpp"
#include "Dissonance/Networking/zzzz__IReadonlyClientIdCollection_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ClientIdCollection___c::*)()>(&::Dissonance::Networking::ClientIdCollection___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection___c.__ctor_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW> (::Dissonance::Networking::ClientIdCollection___c::*)(::StringW, int32_t)>(&::Dissonance::Networking::ClientIdCollection___c::__ctor_b__6_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ed2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection___c*>(),
                        {"<.ctor>b__6_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection___c.__ctor_b__6_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::ClientIdCollection___c::*)(::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>)>(&::Dissonance::Networking::ClientIdCollection___c::__ctor_b__6_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection___c*>(),
                        {"<.ctor>b__6_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::ClientIdCollection___c::setStaticF___9(::Dissonance::Networking::ClientIdCollection___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Networking::ClientIdCollection___c*, "<>9", ::Dissonance::Networking::ClientIdCollection___c*>(std::forward<::Dissonance::Networking::ClientIdCollection___c*>(value));
}
inline ::Dissonance::Networking::ClientIdCollection___c* Dissonance::Networking::ClientIdCollection___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Networking::ClientIdCollection___c*, "<>9", ::Dissonance::Networking::ClientIdCollection___c*>();
}
inline void Dissonance::Networking::ClientIdCollection___c::setStaticF___9__6_0(::System::Func_3<::StringW,int32_t,::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::StringW,int32_t,::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*, "<>9__6_0", ::Dissonance::Networking::ClientIdCollection___c*>(std::forward<::System::Func_3<::StringW,int32_t,::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*>(value));
}
inline ::System::Func_3<::StringW,int32_t,::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>* Dissonance::Networking::ClientIdCollection___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<::StringW,int32_t,::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*, "<>9__6_0", ::Dissonance::Networking::ClientIdCollection___c*>();
}
inline void Dissonance::Networking::ClientIdCollection___c::setStaticF___9__6_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>,bool>*, "<>9__6_1", ::Dissonance::Networking::ClientIdCollection___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>,bool>* Dissonance::Networking::ClientIdCollection___c::getStaticF___9__6_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>,bool>*, "<>9__6_1", ::Dissonance::Networking::ClientIdCollection___c*>();
}
inline void Dissonance::Networking::ClientIdCollection___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW> Dissonance::Networking::ClientIdCollection___c::__ctor_b__6_0(::StringW  a, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection___c*>(),
                        {"<.ctor>b__6_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>(this, ___internal_method, a, i);
}
inline bool Dissonance::Networking::ClientIdCollection___c::__ctor_b__6_1(::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection___c*>(),
                        {"<.ctor>b__6_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Dissonance::Networking::ClientIdCollection___c* Dissonance::Networking::ClientIdCollection___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::ClientIdCollection___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::ClientIdCollection___c::ClientIdCollection___c()   {
}
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.get_Items
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>* (::Dissonance::Networking::ClientIdCollection::*)()>(&::Dissonance::Networking::ClientIdCollection::get_Items)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"get_Items", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ClientIdCollection::*)()>(&::Dissonance::Networking::ClientIdCollection::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805dafc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.GetFreeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Networking::ClientIdCollection::*)()>(&::Dissonance::Networking::ClientIdCollection::GetFreeId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805da9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"GetFreeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.AddFreeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ClientIdCollection::*)(uint16_t)>(&::Dissonance::Networking::ClientIdCollection::AddFreeId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805da8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"AddFreeId", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::ClientIdCollection::*)(uint16_t)>(&::Dissonance::Networking::ClientIdCollection::GetName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805daad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"GetName", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.GetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint16_t> (::Dissonance::Networking::ClientIdCollection::*)(::StringW)>(&::Dissonance::Networking::ClientIdCollection::GetId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805daa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"GetId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Networking::ClientIdCollection::*)(::StringW)>(&::Dissonance::Networking::ClientIdCollection::Register)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805dacf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"Register", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::ClientIdCollection::*)(::StringW)>(&::Dissonance::Networking::ClientIdCollection::Unregister)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805dae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"Unregister", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ClientIdCollection::*)()>(&::Dissonance::Networking::ClientIdCollection::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805da960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientIdCollection.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ClientIdCollection::*)(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*)>(&::Dissonance::Networking::ClientIdCollection::Load)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805dab10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"Load", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Dissonance::Networking::ClientIdCollection::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Dissonance::Networking::ClientIdCollection::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
constexpr void Dissonance::Networking::ClientIdCollection::__cordl_internal_set__items(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
constexpr ::System::Collections::Generic::List_1<uint16_t>*& Dissonance::Networking::ClientIdCollection::__cordl_internal_get__freeIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeIds;
}
constexpr ::System::Collections::Generic::List_1<uint16_t>* const& Dissonance::Networking::ClientIdCollection::__cordl_internal_get__freeIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeIds;
}
constexpr void Dissonance::Networking::ClientIdCollection::__cordl_internal_set__freeIds(::System::Collections::Generic::List_1<uint16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freeIds = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*& Dissonance::Networking::ClientIdCollection::__cordl_internal_get__alive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alive;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>* const& Dissonance::Networking::ClientIdCollection::__cordl_internal_get__alive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alive;
}
constexpr void Dissonance::Networking::ClientIdCollection::__cordl_internal_set__alive(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alive = value;
}
inline void Dissonance::Networking::ClientIdCollection::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::ClientIdCollection*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Networking::ClientIdCollection::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::ClientIdCollection*>();
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>* Dissonance::Networking::ClientIdCollection::get_Items()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"get_Items", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*>(this, ___internal_method);
}
inline void Dissonance::Networking::ClientIdCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint16_t Dissonance::Networking::ClientIdCollection::GetFreeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"GetFreeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Dissonance::Networking::ClientIdCollection::AddFreeId(uint16_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"AddFreeId", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::StringW Dissonance::Networking::ClientIdCollection::GetName(uint16_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"GetName", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
inline ::System::Nullable_1<uint16_t> Dissonance::Networking::ClientIdCollection::GetId(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"GetId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(this, ___internal_method, name);
}
inline uint16_t Dissonance::Networking::ClientIdCollection::Register(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"Register", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, name);
}
inline bool Dissonance::Networking::ClientIdCollection::Unregister(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"Unregister", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void Dissonance::Networking::ClientIdCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Networking::ClientIdCollection::Load(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*  clients)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientIdCollection*>(),
                        {"Load", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clients);
}
inline ::Dissonance::Networking::ClientIdCollection* Dissonance::Networking::ClientIdCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::ClientIdCollection*>());
}
/// @brief Convert operator to "::Dissonance::Networking::IReadonlyClientIdCollection"
constexpr  Dissonance::Networking::ClientIdCollection::operator ::Dissonance::Networking::IReadonlyClientIdCollection*() noexcept {
return static_cast<::Dissonance::Networking::IReadonlyClientIdCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::IReadonlyClientIdCollection"
constexpr ::Dissonance::Networking::IReadonlyClientIdCollection* Dissonance::Networking::ClientIdCollection::i___Dissonance__Networking__IReadonlyClientIdCollection() noexcept {
return static_cast<::Dissonance::Networking::IReadonlyClientIdCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::ClientIdCollection::ClientIdCollection()   {
}
