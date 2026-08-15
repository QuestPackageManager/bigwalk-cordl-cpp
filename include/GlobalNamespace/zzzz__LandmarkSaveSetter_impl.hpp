#pragma once
// IWYU pragma private; include "GlobalNamespace/LandmarkSaveSetter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LandmarkSaveSetter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LandmarkSaveSetter.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LandmarkSaveSetter::*)()>(&::GlobalNamespace::LandmarkSaveSetter::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18037e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LandmarkSaveSetter*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LandmarkSaveSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LandmarkSaveSetter::*)()>(&::GlobalNamespace::LandmarkSaveSetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LandmarkSaveSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LandmarkSaveSetter::__cordl_internal_get_guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr ::StringW const& GlobalNamespace::LandmarkSaveSetter::__cordl_internal_get_guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr void GlobalNamespace::LandmarkSaveSetter::__cordl_internal_set_guid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guid = value;
}
constexpr bool& GlobalNamespace::LandmarkSaveSetter::__cordl_internal_get_showGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGizmos;
}
constexpr bool const& GlobalNamespace::LandmarkSaveSetter::__cordl_internal_get_showGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGizmos;
}
constexpr void GlobalNamespace::LandmarkSaveSetter::__cordl_internal_set_showGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGizmos = value;
}
inline void GlobalNamespace::LandmarkSaveSetter::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LandmarkSaveSetter*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LandmarkSaveSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LandmarkSaveSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LandmarkSaveSetter* GlobalNamespace::LandmarkSaveSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LandmarkSaveSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LandmarkSaveSetter::LandmarkSaveSetter()   {
}
