#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectStampHolder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectStampHolder_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectStampHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectStampHolder::*)()>(&::JBooth::MicroVerseCore::ObjectStampHolder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStampHolder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& JBooth::MicroVerseCore::ObjectStampHolder::__cordl_internal_get_guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr ::StringW const& JBooth::MicroVerseCore::ObjectStampHolder::__cordl_internal_get_guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr void JBooth::MicroVerseCore::ObjectStampHolder::__cordl_internal_set_guid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guid = value;
}
inline void JBooth::MicroVerseCore::ObjectStampHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectStampHolder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ObjectStampHolder* JBooth::MicroVerseCore::ObjectStampHolder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ObjectStampHolder*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectStampHolder::ObjectStampHolder()   {
}
