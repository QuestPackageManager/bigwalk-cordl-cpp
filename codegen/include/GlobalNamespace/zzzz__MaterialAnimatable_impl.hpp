#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialAnimatable.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialAnimatable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialAnimatable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialAnimatable::*)()>(&::GlobalNamespace::MaterialAnimatable::Update)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803ed720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialAnimatable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialAnimatable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialAnimatable::*)()>(&::GlobalNamespace::MaterialAnimatable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialAnimatable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>& GlobalNamespace::MaterialAnimatable::__cordl_internal_get_propertyBlockHelpers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelpers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>> const& GlobalNamespace::MaterialAnimatable::__cordl_internal_get_propertyBlockHelpers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelpers;
}
constexpr void GlobalNamespace::MaterialAnimatable::__cordl_internal_set_propertyBlockHelpers(::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelpers = value;
}
constexpr ::StringW& GlobalNamespace::MaterialAnimatable::__cordl_internal_get_propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::MaterialAnimatable::__cordl_internal_get_propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr void GlobalNamespace::MaterialAnimatable::__cordl_internal_set_propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyName = value;
}
constexpr float_t& GlobalNamespace::MaterialAnimatable::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr float_t const& GlobalNamespace::MaterialAnimatable::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::MaterialAnimatable::__cordl_internal_set_value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr bool& GlobalNamespace::MaterialAnimatable::__cordl_internal_get_isGlobal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGlobal;
}
constexpr bool const& GlobalNamespace::MaterialAnimatable::__cordl_internal_get_isGlobal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGlobal;
}
constexpr void GlobalNamespace::MaterialAnimatable::__cordl_internal_set_isGlobal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGlobal = value;
}
inline void GlobalNamespace::MaterialAnimatable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialAnimatable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialAnimatable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialAnimatable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialAnimatable* GlobalNamespace::MaterialAnimatable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialAnimatable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialAnimatable::MaterialAnimatable()   {
}
