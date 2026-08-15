#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/FilePath.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__FilePath_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::FilePath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Utility::FilePath::*)(::StringW)>(&::WaveHarmonic::Crest::Utility::FilePath::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::FilePath*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& WaveHarmonic::Crest::Utility::FilePath::__cordl_internal_get__Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Path;
}
constexpr ::StringW const& WaveHarmonic::Crest::Utility::FilePath::__cordl_internal_get__Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Path;
}
constexpr void WaveHarmonic::Crest::Utility::FilePath::__cordl_internal_set__Path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Path = value;
}
inline void WaveHarmonic::Crest::Utility::FilePath::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::FilePath*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline ::WaveHarmonic::Crest::Utility::FilePath* WaveHarmonic::Crest::Utility::FilePath::New_ctor(::StringW  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Utility::FilePath*>(path));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Utility::FilePath::FilePath()   {
}
