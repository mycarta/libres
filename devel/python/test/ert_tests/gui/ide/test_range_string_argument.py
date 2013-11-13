from ert_gui.ide.keywords.definitions.range_string_argument import RangeStringArgument
from ert_tests import ExtendedTestCase


class RangeStringArgumentTest(ExtendedTestCase):

    def test_proper_name_argument(self):

        argument = RangeStringArgument()

        self.assertTrue(argument.validate("1"))
        self.assertTrue(argument.validate("1-10"))
        self.assertTrue(argument.validate("1-10,11-20"))
        self.assertTrue(argument.validate("1-10,11,12,13,14,15,16-20"))

        self.assertFalse(argument.validate("s5"))
        self.assertFalse(argument.validate("1-10,5-4*"))
