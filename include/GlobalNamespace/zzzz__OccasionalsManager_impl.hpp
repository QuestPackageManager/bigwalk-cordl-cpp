#pragma once
// IWYU pragma private; include "GlobalNamespace/OccasionalsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OccasionalsManager_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OccasionalsManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OccasionalsManager::*)()>(&::GlobalNamespace::OccasionalsManager::Initialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803eda10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OccasionalsManager.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IOccasional*)>(&::GlobalNamespace::OccasionalsManager::Add)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803ed970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::IOccasional*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OccasionalsManager.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IOccasional*)>(&::GlobalNamespace::OccasionalsManager::Remove)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803edab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::IOccasional*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OccasionalsManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OccasionalsManager::*)()>(&::GlobalNamespace::OccasionalsManager::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803edb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OccasionalsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OccasionalsManager::*)()>(&::GlobalNamespace::OccasionalsManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*& GlobalNamespace::OccasionalsManager::__cordl_internal_get_activeOccasionals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeOccasionals;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>* const& GlobalNamespace::OccasionalsManager::__cordl_internal_get_activeOccasionals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeOccasionals;
}
constexpr void GlobalNamespace::OccasionalsManager::__cordl_internal_set_activeOccasionals(::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeOccasionals = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*& GlobalNamespace::OccasionalsManager::__cordl_internal_get_changedList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changedList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>* const& GlobalNamespace::OccasionalsManager::__cordl_internal_get_changedList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changedList;
}
constexpr void GlobalNamespace::OccasionalsManager::__cordl_internal_set_changedList(::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changedList = value;
}
constexpr bool& GlobalNamespace::OccasionalsManager::__cordl_internal_get_listHasChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listHasChanged;
}
constexpr bool const& GlobalNamespace::OccasionalsManager::__cordl_internal_get_listHasChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listHasChanged;
}
constexpr void GlobalNamespace::OccasionalsManager::__cordl_internal_set_listHasChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listHasChanged = value;
}
constexpr bool& GlobalNamespace::OccasionalsManager::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::OccasionalsManager::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::OccasionalsManager::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::OccasionalsManager::setStaticF_instance(::GlobalNamespace::OccasionalsManager*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OccasionalsManager*, "instance", ::GlobalNamespace::OccasionalsManager*>(std::forward<::GlobalNamespace::OccasionalsManager*>(value));
}
inline ::GlobalNamespace::OccasionalsManager* GlobalNamespace::OccasionalsManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OccasionalsManager*, "instance", ::GlobalNamespace::OccasionalsManager*>();
}
inline void GlobalNamespace::OccasionalsManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OccasionalsManager::Add(::GlobalNamespace::IOccasional*  occasional)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::IOccasional*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, occasional);
}
inline void GlobalNamespace::OccasionalsManager::Remove(::GlobalNamespace::IOccasional*  occasional)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::IOccasional*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, occasional);
}
inline void GlobalNamespace::OccasionalsManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OccasionalsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OccasionalsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OccasionalsManager* GlobalNamespace::OccasionalsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OccasionalsManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OccasionalsManager::OccasionalsManager()   {
}
