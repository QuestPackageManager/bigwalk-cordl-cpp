#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/LogCategoryLevelPair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__LogCategoryLevelPair_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::*)(::StringW, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::__cordl_internal_get_Category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Category;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::__cordl_internal_get_Category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Category;
}
constexpr void PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::__cordl_internal_set_Category(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Category = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::__cordl_internal_get_Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::__cordl_internal_get_Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr void PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::__cordl_internal_set_Level(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Level = value;
}
inline void PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::_ctor(::StringW  category, ::StringW  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, level);
}
inline ::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair* PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::New_ctor(::StringW  category, ::StringW  level)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>(category, level));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair::LogCategoryLevelPair()   {
}
